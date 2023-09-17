#include "add.h"
#include "integer.h"
#include <pybind11/pybind11.h>

namespace py = pybind11;

// create python bindings
PYBIND11_MODULE(pyinteger, m) {
    m.doc() = "This is the module docstring.";

    // m.def("add", &add, "This is the function docstring.");
    // m.def("add", &add, "This is the function docstring.", py::arg("i"), py::arg("j")); // with keyword arguments
    m.def("add", &add, "This is the function docstring.", py::arg("i") = 0, py::arg("j") = 1); // with default values

    py::class_<Integer>(m, "Integer")
        .def(py::init<int>())
        .def("setNum", &Integer::setNum, py::arg("i") = 0)
        .def("getNum", &Integer::getNum)
        .def("printNum", &Integer::printNum);
}

