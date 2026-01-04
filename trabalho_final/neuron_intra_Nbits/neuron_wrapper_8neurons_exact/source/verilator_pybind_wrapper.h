// MAxPy 0.1.2

#ifndef __MAXPY_WRAPPER__
#define __MAXPY_WRAPPER__

#include <pybind11/pybind11.h>
/* #include "/home/juliana/verilator/include/verilated_vcd_c.h" */

#include "verilated.h"
#include "neuron_wrapper_8neurons_exact.h"
#include "sub___024root.h"

namespace py = pybind11;


// "Net" class
class Net {
	public:
		Net(const char* name_in, void *p_val, unsigned int bit_mask_in);
		void eval();
		void reset();
		unsigned int get_val();

		const char* name;
		int t0;
		int t1;
		int tc;
		int tx;
		int ig;
		float perc_high;
		float perc_low;
		unsigned int *val;
		unsigned int last_val;
		unsigned int bit_mask;
		bool first;
		Net *next;
};


// "Instance" class
class Instance {
	public:
		Instance(const char* name_in);
		const char* name;
		Instance *head_instance;
		Instance *next;
		Net *head_net;
};


// "MAxPy_Vneuron_wrapper_8neurons_exact" class
#pragma GCC visibility push(hidden)
class MAxPy_neuron_wrapper_8neurons_exact : public neuron_wrapper_8neurons_exact {
	public:
		MAxPy_neuron_wrapper_8neurons_exact(const char* name);
		~MAxPy_neuron_wrapper_8neurons_exact();
		void eval();

		// saif public methods
		void eval_nets(Instance *pi);
		void reset_nets(Instance *pi);
        void saif_on_the_fly(int reset);
		void saif_print_instance(FILE *file_handler, Instance *pi, int level);
		void clear_memory();
        void enable_saif_output();
		
		// vcd public methods
		/* void trace(const char* vcd_path); */

		//void show_nets(Instance *pi);

		Instance* maxpy_neuron_wrapper_8neurons();

	private:
		// saif private properties
		vluint64_t main_time;
		vluint64_t last_main_time;
		Instance *top_instance;
        bool saif_output;
		
		// vcd private properties
		/* VerilatedVcdC* tfp; */
	public:
		float area;
		float power;
		float timing;
		std::string parameters;

		// saif public properties
		std::string saif_path;
		py::list node_info;

		// getters and setters
		int get_clk();
		void set_clk(int val);

		int get_rst();
		void set_rst(int val);

		int get_en();
		void set_en(int val);

		int get_load_en();
		void set_load_en(int val);

		int get_w_in_0();
		void set_w_in_0(int val);

		int get_x_in_0();
		void set_x_in_0(int val);

		int get_w_in_1();
		void set_w_in_1(int val);

		int get_x_in_1();
		void set_x_in_1(int val);

		int get_w_in_2();
		void set_w_in_2(int val);

		int get_x_in_2();
		void set_x_in_2(int val);

		int get_w_in_3();
		void set_w_in_3(int val);

		int get_x_in_3();
		void set_x_in_3(int val);

		int get_w_in_4();
		void set_w_in_4(int val);

		int get_x_in_4();
		void set_x_in_4(int val);

		int get_w_in_5();
		void set_w_in_5(int val);

		int get_x_in_5();
		void set_x_in_5(int val);

		int get_w_in_6();
		void set_w_in_6(int val);

		int get_x_in_6();
		void set_x_in_6(int val);

		int get_w_in_7();
		void set_w_in_7(int val);

		int get_x_in_7();
		void set_x_in_7(int val);

		int get_out_safe_0();
		void set_out_safe_0(int val);

		int get_out_safe_1();
		void set_out_safe_1(int val);

		int get_out_safe_2();
		void set_out_safe_2(int val);

		int get_out_safe_3();
		void set_out_safe_3(int val);

		int get_out_safe_4();
		void set_out_safe_4(int val);

		int get_out_safe_5();
		void set_out_safe_5(int val);

		int get_out_safe_6();
		void set_out_safe_6(int val);

		int get_out_safe_7();
		void set_out_safe_7(int val);

};
#pragma GCC visibility pop

#endif
