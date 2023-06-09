// right_tri.h
#pragma once
#include "triangle.h"

/* прямоугольный треугольник (угол C всегда равен 90);*/
class Right_tri : public Triangle
{
protected:
    Right_tri(int* a, int* b, int* c, int* A, int* B, int* C);
public:
    Right_tri();
    void set_right_tri(int* a, int* b, int* c, int* A, int* B, int* C);
    void print_info() override;
};