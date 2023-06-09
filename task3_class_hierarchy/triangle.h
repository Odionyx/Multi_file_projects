// triangle.h
#pragma once
#include "figure.h"

/* треугольник */
class Triangle : public Figure
{
protected:
    int a = 0, b = 0, c = 0, A = 0, B = 0, C = 0;
protected:
    Triangle(int* a, int* b, int* c, int* A, int* B, int* C);
public:
    Triangle();
    void print_info() override;
};