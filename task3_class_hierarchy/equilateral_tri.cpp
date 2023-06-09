// equilateral_tri.cpp
#include "equilateral_tri.h"

/* равносторонний треугольник (все стороны равны, все углы равны 60);*/
Equilateral_tri::Equilateral_tri(int* a, int* b, int* c, int* A, int* B, int* C)
    : Triangle(a, b, c, A, B, C) {
    (*a) = (*b) = (*c);
    (*A) = (*B) = (*C) = 60;
};

Equilateral_tri::Equilateral_tri() {
    this->a = 30; this->b = 30; this->c = 30;
    this->A = 60; this->B = 60; this->C = 60;
};

void Equilateral_tri::set_equilateral_tri(int* a, int* b, int* c, int* A, int* B, int* C) {
    Equilateral_tri(a, b, c, A, B, C);
};

void Equilateral_tri::print_info() {
    std::cout << "Равносторонний треугольник:" << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы:  A=" << A << " B=" << B << " C=" << C << std::endl;
    std::cout << std::endl;
};