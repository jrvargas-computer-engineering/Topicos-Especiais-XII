// MAxPy 0.1.2

#ifndef __MAXPY_WRAPPER__
#define __MAXPY_WRAPPER__

#include <pybind11/pybind11.h>
/* #include "/home/juliana/verilator/include/verilated_vcd_c.h" */

#include "verilated.h"
#include "poly1_DRUMs_6_eta1_4.h"
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


// "MAxPy_Vpoly1_DRUMs_6_eta1_4" class
#pragma GCC visibility push(hidden)
class MAxPy_poly1_DRUMs_6_eta1_4 : public poly1_DRUMs_6_eta1_4 {
	public:
		MAxPy_poly1_DRUMs_6_eta1_4(const char* name);
		~MAxPy_poly1_DRUMs_6_eta1_4();
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

		Instance* maxpy_poly1();

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
		int get_a();
		void set_a(int val);

		int get_b();
		void set_b(int val);

		int get_x();
		void set_x(int val);

		int get_y();
		void set_y(int val);

};
#pragma GCC visibility pop

#endif
