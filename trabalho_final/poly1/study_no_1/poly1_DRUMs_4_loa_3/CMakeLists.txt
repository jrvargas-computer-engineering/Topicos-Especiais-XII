cmake_minimum_required(VERSION 3.4...3.18)
project(poly1)
find_package(pybind11 REQUIRED)
file(GLOB SOURCES "source/*.cpp")

pybind11_add_module(poly1
    /home/juliana/verilator/include/verilated.cpp
    # /home/juliana/verilator/include/verilated_vcd_c.cpp
    ${SOURCES}
)

target_include_directories(poly1 PUBLIC /home/juliana/verilator/include/ /home/juliana/verilator/include/vltstd)
