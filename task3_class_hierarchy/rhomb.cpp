// rhomb.cpp
#include "rhomb.h"

/* ���� (��� ������� �����, ���� A,C � B,D ������� �����);*/
Rhomb::Rhomb(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D)
    : Parallelogram(a, b, c, d, A, B, C, D) {
    (*a) = (*b) = (*c) = (*d);
    (*A) = (*C); (*B) = (*D);
};

Rhomb::Rhomb() {
    this->a = 20; this->b = 20; this->c = 20; this->d = 20;
    this->A = 60; this->B = 120; this->C = 60; this->D = 120;
};

void Rhomb::set_rhomb(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D) {
    Rhomb(a, b, c, d, A, B, C, D);
};

void Rhomb::print_info() {
    std::cout << "����:" << std::endl;
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "����:  A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    std::cout << std::endl;
};