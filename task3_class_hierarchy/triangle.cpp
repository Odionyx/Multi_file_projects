// triangle.cpp
#include "triangle.h"

Triangle::Triangle(int* a, int* b, int* c, int* A, int* B, int* C) {
    this->a = (*a); this->b = (*b); this->c = (*c);
    this->A = (*A); this->B = (*B); this->C = (*C);
};

Triangle::Triangle() {
    this->a = 10; this->b = 20; this->c = 30;
    this->A = 50; this->B = 60; this->C = 70;
};

void Triangle::print_info() {
    std::cout << "Треугольник:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы:  A=" << A << " B=" << B << " C=" << C << std::endl;
    std::cout << std::endl;
};