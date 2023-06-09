// quadrilateral.cpp
#include "quadrilateral.h"
#include <iostream>

Quadrilateral::Quadrilateral(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D) {
    this->a = (*a); this->b = (*b); this->c = (*c); this->d = (*d);
    this->A = (*A); this->B = (*B); this->C = (*C); this->D = (*D);
};

Quadrilateral::Quadrilateral() {
    this->a = 10; this->b = 20; this->c = 30; this->d = 40;
    this->A = 50; this->B = 60; this->C = 70; this->D = 80;
};

void Quadrilateral::print_info() {
    std::cout << "Четырёхугольник:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "Углы:  A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    std::cout << std::endl;
};