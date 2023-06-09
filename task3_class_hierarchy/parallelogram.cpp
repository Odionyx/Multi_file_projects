// parallelogram.cpp
#include "parallelogram.h"

/* �������������� (������� a,c � b,d ������� �����, ���� A,C � B,D ������� �����);*/
Parallelogram::Parallelogram(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D)
    : Quadrilateral() {
    (*a) = (*c); (*b) = (*d);
    (*A) = (*c); (*B) = (*D);
};

Parallelogram::Parallelogram() {
    this->a = 10; this->b = 20; this->c = 10; this->d = 20;
    this->A = 70; this->B = 110; this->C = 70; this->D = 110;
};

void Parallelogram::set_parallelogram(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D) {
    Parallelogram(a, b, c, d, A, B, C, D);
};

void Parallelogram::print_info() {
    std::cout << "��������������:" << std::endl;
    std::cout << "�������: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
    std::cout << "����:  A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    std::cout << std::endl;
};