// equilateral_tri.h
#pragma once
#include "triangle.h"

class Equilateral_tri : public Triangle
{
protected:
    Equilateral_tri(int* a, int* b, int* c, int* A, int* B, int* C);
public:
    Equilateral_tri();
    void set_equilateral_tri(int* a, int* b, int* c, int* A, int* B, int* C);
    void print_info() override;
};