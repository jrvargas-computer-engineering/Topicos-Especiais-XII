// MAxPy 0.1.2

#include "verilator_pybind_wrapper.h"

using namespace std;
using namespace pybind11::literals;


// "Net" class methods:

Net::Net(const char* name_in, void *p_val, unsigned int bit_mask_in) {

	t0 = 0;
	t1 = 0;
	tc = 0;
	tx = 0;
	ig = 0;
	first = 1;

	bit_mask = bit_mask_in;
	val = (unsigned int *) p_val;
	last_val = get_val();
	name = name_in;
	next = nullptr;
}

void Net::eval() {

	if(!first) {
		if(get_val())
			t1++;
		else
			t0++;

		if(get_val() != last_val) {
			tc++;
			last_val = get_val();
		}
	}
	else {
		first = 0;
		last_val = get_val();
	}
}

void Net::reset() {

	t0 = 0;
	t1 = 0;
	tc = 0;
	tx = 0;
	ig = 0;
	first = 1;
	last_val = get_val();
}

unsigned int Net::get_val() {

	if(val) {
		if(bit_mask < 0x40)
			return((*val >> bit_mask) & 1);
		else
			return(*val & 1);
	}
	else {
		return(0);
	}
}


// "Instance" class methods:

Instance::Instance(const char* name_in) {
	name = name_in;
	head_instance = nullptr;
	next = nullptr;
	head_net = nullptr;
}


// "AxPy_poly1_LOBA0s_4_copyA_3" class methods:


MAxPy_poly1_LOBA0s_4_copyA_3::MAxPy_poly1_LOBA0s_4_copyA_3(const char* name = "TOP") : poly1_LOBA0s_4_copyA_3{name} {

	area = 0.000000;
	power = 0.000000;
	timing = 0.000000;
	parameters = "LOBA0s_4_copyA_3";
	/* tfp = nullptr; */
	main_time = 0;
	last_main_time = 0;
	top_instance = maxpy_poly1();
	saif_path = "";
	saif_output = false;
}

MAxPy_poly1_LOBA0s_4_copyA_3::~MAxPy_poly1_LOBA0s_4_copyA_3() {

	/* if(tfp) {
		tfp->close();
		tfp = nullptr;
	} */

	if(saif_output == true && (main_time != last_main_time))
		saif_on_the_fly(0);

	clear_memory();
}

void MAxPy_poly1_LOBA0s_4_copyA_3::eval() {

	poly1_LOBA0s_4_copyA_3::eval();

	main_time++;
	eval_nets(top_instance);

	/* if(tfp)
		tfp->dump(main_time); */
}

void MAxPy_poly1_LOBA0s_4_copyA_3::clear_memory() {

	Instance *pi, *temp_i;
	Net *pn, *temp_n;

	pi = top_instance;

	while(pi != nullptr) {

		pn = pi->head_net;

		while(pn != nullptr) {

			temp_n = pn->next;
			delete pn;
			pn = temp_n;
		}

		temp_i = pi->next;
		delete pi;
		pi = temp_i;
	}
}

void MAxPy_poly1_LOBA0s_4_copyA_3::eval_nets(Instance *pi) {
	Net *pn;

	if(pi) {
		pn = pi->head_net;
		while(pn) {
			pn->eval();
			pn = pn->next;
		}
		pi = pi->head_instance;
		while(pi) {
			eval_nets(pi);
			pi = pi->next;
		}
	}
}

void MAxPy_poly1_LOBA0s_4_copyA_3::reset_nets(Instance *pi) {
	Net *pn;

	if(pi) {
		pn = pi->head_net;
		while(pn) {
			pn->reset();
			pn = pn->next;
		}
		pi = pi->head_instance;
		while(pi) {
			reset_nets(pi);
			pi = pi->next;
		}
	}
}

void MAxPy_poly1_LOBA0s_4_copyA_3::enable_saif_output() {
    saif_output = true;
}

void MAxPy_poly1_LOBA0s_4_copyA_3::saif_on_the_fly(int reset = 0) {

	FILE *file_handler;
	char temp[256] = {0};

	if(saif_path == "") {
		saif_path = top_instance->name;
		saif_path.append("_");
		saif_path.append(parameters);
		saif_path.append(".saif");
	}

	file_handler = fopen(saif_path.c_str(), "w");

	// saif header
	fputs("(SAIFILE\n", file_handler);
	fputs("(SAIFVERSION \"2.0\")\n", file_handler);
	fputs("(DIRECTION \"backward\")\n", file_handler);
	fputs("(DESIGN \"poly1\"\n", file_handler);
	fputs("(DATE \"08-14-2021 22:02:09\")\n", file_handler);	// #TODO: use system date and time
	fputs("(VENDOR \"AxPy Inc\")\n", file_handler);
	fputs("(PROGRAM_NAME \"open_autosaif\")\n", file_handler);
	fputs("(VERSION \"v1\")\n", file_handler);
	fputs("(DIVIDER / )\n", file_handler);
	fputs("(TIMESCALE 1 ps)\n", file_handler);
	sprintf(temp, "(DURATION %llu)\n", (long long unsigned int) main_time);
	fputs(temp, file_handler);

	if(top_instance) {
		saif_print_instance(file_handler, top_instance, 0);
	}

	fputs(")", file_handler);
	fclose(file_handler);

	if(reset) {
		main_time = 0;
		reset_nets(top_instance);
	}

	last_main_time = main_time;
}

void MAxPy_poly1_LOBA0s_4_copyA_3::saif_print_instance(FILE *file_handler, Instance *pi, int level) {

	Net *pn;
	char tab[256];
	char s[512];
	char temp[128];
	int i;

	strcpy(tab, "");
	for(i = 0; i < level; i++)
		strcat(tab, "  ");

	sprintf(s, "%s(INSTANCE %s\n", tab, pi->name);
	fputs(s, file_handler);

	sprintf(s, "%s  (NET\n", tab);
	fputs(s, file_handler);

	pn = pi->head_net;
	while(pn) {

		// net name
		if(pn->bit_mask < 0x40) {
			sprintf(s, "%s    (%s\\[%d\\]\n", tab, pn->name, pn->bit_mask);
			fputs(s, file_handler);
			sprintf(temp, "%s[%d]", pn->name, pn->bit_mask);
		}
		else {
			sprintf(s, "%s    (%s\n", tab, pn->name);
			fputs(s, file_handler);
			sprintf(temp, "%s", pn->name);
		}
		// times
		sprintf(s, "%s      (T0 %d) (T1 %d) (TX %d)\n", tab, pn->t0, pn->t1, pn->tx);


		pn->perc_high = (float)pn->t1/(float)(main_time - 1) * 100.0;
		pn->perc_low = (float)pn->t0/(float)(main_time - 1) * 100.0;


		node_info.append(py::dict("node"_a=temp, "p0"_a=pn->perc_low, "p1"_a=pn->perc_high));

		fputs(s, file_handler);

		// toggle
		sprintf(s, "%s      (TC %d) (IG %d)\n", tab, pn->tc, pn->ig);
		fputs(s, file_handler);
		sprintf(s, "%s    )\n", tab);
		fputs(s, file_handler);

		pn = pn->next;
	}

	sprintf(s, "%s  )\n", tab);
	fputs(s, file_handler);

	pi = pi->head_instance;
	while(pi) {
		saif_print_instance(file_handler, pi, level+1);
		pi = pi->next;
	}

	sprintf(s, "%s)\n", tab);
	fputs(s, file_handler);
}


/* void MAxPy_poly1_LOBA0s_4_copyA_3::trace(const char* vcd_path) {
	Verilated::traceEverOn(true);
	tfp = new VerilatedVcdC;
	poly1_LOBA0s_4_copyA_3::trace(tfp, 99);
	tfp->open(vcd_path);
} */

int MAxPy_poly1_LOBA0s_4_copyA_3::get_a() {
	return(poly1_LOBA0s_4_copyA_3::a);
}

void MAxPy_poly1_LOBA0s_4_copyA_3::set_a(int val) {
	poly1_LOBA0s_4_copyA_3::a = val;
}

int MAxPy_poly1_LOBA0s_4_copyA_3::get_b() {
	return(poly1_LOBA0s_4_copyA_3::b);
}

void MAxPy_poly1_LOBA0s_4_copyA_3::set_b(int val) {
	poly1_LOBA0s_4_copyA_3::b = val;
}

int MAxPy_poly1_LOBA0s_4_copyA_3::get_x() {
	return(poly1_LOBA0s_4_copyA_3::x);
}

void MAxPy_poly1_LOBA0s_4_copyA_3::set_x(int val) {
	poly1_LOBA0s_4_copyA_3::x = val;
}

int MAxPy_poly1_LOBA0s_4_copyA_3::get_y() {
	return(poly1_LOBA0s_4_copyA_3::y);
}

void MAxPy_poly1_LOBA0s_4_copyA_3::set_y(int val) {
	poly1_LOBA0s_4_copyA_3::y = val;
}




// void MAxPy_poly1_LOBA0s_4_copyA_3::show_nets(Instance *pi) {
// 	Net *pn;
// 	if(pi) {
// 		printf("instance: %s\n", pi->name);
// 		pn = pi->head_net;
// 		if(pn) {
// 			while(pn) {
// 				printf("net: %s (mask %d), t0 %d, t1 %d, tc %d\n", pn->name, pn->bit_mask, pn->t0, pn->t1, pn->tc);
// 				pn = pn->next;
// 			}
// 		}
// 		else {
// 			printf("pi->head_net nullptr!\n");
// 		}
// 		pi = pi->head_instance;
// 		if(pi) {
// 			while(pi) {
// 				show_nets(pi);
// 				pi = pi->next;
// 			}
// 		}
// 		else {
// 			printf("pi->head_instance nullptr!\n");
// 		}
// 	}
// 	else {
// 		printf("pi nullptr!\n");
// 	}
// }


// Pybind wrapper code:

PYBIND11_MODULE(poly1, m) {
    py::class_<MAxPy_poly1_LOBA0s_4_copyA_3>(m, "top")
		.def(py::init<const char *>(), py::arg("name")="poly1")
		.def("name", &MAxPy_poly1_LOBA0s_4_copyA_3::name)
		.def_readwrite("area", &MAxPy_poly1_LOBA0s_4_copyA_3::area)
		.def_readwrite("power", &MAxPy_poly1_LOBA0s_4_copyA_3::power)
		.def_readwrite("timing", &MAxPy_poly1_LOBA0s_4_copyA_3::timing)
		.def_readwrite("parameters", &MAxPy_poly1_LOBA0s_4_copyA_3::parameters)

		// saif on the fly methods
		.def_readwrite("saif_path", &MAxPy_poly1_LOBA0s_4_copyA_3::saif_path)
		.def_readwrite("node_info", &MAxPy_poly1_LOBA0s_4_copyA_3::node_info)
		.def("saif_on_the_fly", &MAxPy_poly1_LOBA0s_4_copyA_3::saif_on_the_fly, py::arg("reset")=0)

		// vcd methods
		/* .def("%s", &MAxPy_poly1_LOBA0s_4_copyA_3::trace, py::arg("vcd_path")="") */

		// verilator model methods
		.def("eval", &MAxPy_poly1_LOBA0s_4_copyA_3::eval)
		.def("eval_step", &MAxPy_poly1_LOBA0s_4_copyA_3::eval_step)
		.def("eval_end_step", &MAxPy_poly1_LOBA0s_4_copyA_3::eval_end_step)
		.def("final", &MAxPy_poly1_LOBA0s_4_copyA_3::final)

		// getters and setters for inputs and outpus
		.def("get_a", &MAxPy_poly1_LOBA0s_4_copyA_3::get_a)
		.def("set_a", &MAxPy_poly1_LOBA0s_4_copyA_3::set_a)

		.def("get_b", &MAxPy_poly1_LOBA0s_4_copyA_3::get_b)
		.def("set_b", &MAxPy_poly1_LOBA0s_4_copyA_3::set_b)

		.def("get_x", &MAxPy_poly1_LOBA0s_4_copyA_3::get_x)
		.def("set_x", &MAxPy_poly1_LOBA0s_4_copyA_3::set_x)

		.def("get_y", &MAxPy_poly1_LOBA0s_4_copyA_3::get_y)
		.def("set_y", &MAxPy_poly1_LOBA0s_4_copyA_3::set_y)

;

	m.attr("saif_opt") = true;
}
