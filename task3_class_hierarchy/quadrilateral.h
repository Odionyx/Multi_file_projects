// quadrilateral.h
#pragma once
#include "figure.h"

/* четырёхугольник */
class Quadrilateral : public Figure
{
protected:
    int a = 0, b = 0, c = 0, d = 0, A = 0, B = 0, C = 0, D = 0;
protected:
    Quadrilateral(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
public:
    Quadrilateral();
    void print_info() override;
};