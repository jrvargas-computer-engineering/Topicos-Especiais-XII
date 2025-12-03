cmake_minimum_required(VERSION 3.4...3.18)
project(neuron_wrapper_2neurons)
find_package(pybind11 REQUIRED)
file(GLOB SOURCES "source/*.cpp")

pybind11_add_module(neuron_wrapper_2neurons
    /home/juliana/verilator/include/verilated.cpp
    # /home/juliana/verilator/include/verilated_vcd_c.cpp
    ${SOURCES}
)

target_include_directories(neuron_wrapper_2neurons PUBLIC /home/juliana/verilator/include/ /home/juliana/verilator/include/vltstd)
