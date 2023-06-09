// isosceles_tri.h
#pragma once
#include "triangle.h"

class Isosceles_tri : public Triangle
{
protected:
    Isosceles_tri(int* a, int* b, int* c, int* A, int* B, int* C);
public:
    Isosceles_tri();
    void set_isosceles_tri(int* a, int* b, int* c, int* A, int* B, int* C);
    void print_info() override;
};