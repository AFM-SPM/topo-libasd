set(PYBIND11_CPP_STANDARD -std=c++11)

pybind11_add_module(topo_libasd SHARED topo_libasd_py.cpp)
