#include "Vf1_des.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "vbuddy.cpp"

int main(int argc, char **argv, char **env) {
    int i;
    int tick;

    Verilated::commandArgs(argc, argv);
    // init top verilog instance
    Vf1_des* top = new Vf1_des;

    // init trace dump
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace (tfp, 99);
    tfp->open ("f1_des.vcd");

    if (vbdOpen()!=1) return(-1);
    vbdHeader("f1_des");

    // initialize simulation inputs
    top->clk = 1;
    top->rst = 0;
    top->en = 0;
    top->N = 57;
    vbdSetMode(0);
    // run simulation for many clock cycles
    for (i = 0; i < 3000; i++) {

        // dump variables into VCD file and toggle clock
        for (tick = 0; tick < 2; tick++) {
            tfp->dump (2 * i + tick);
            top->clk = !top->clk;
            top->eval ();
        }

        // ++++ Send count value to Vbuddy
        vbdBar(top->data_out& 0xFF);
        vbdCycle(i+1);

        top->rst = (i < 2) | (i == 15);

        if(tick){
            top->en = vbdFlag();
        }

        if (Verilated::gotFinish() ) exit(0);
    }

    vbdClose();
    tfp->close();
    exit(0);
}
