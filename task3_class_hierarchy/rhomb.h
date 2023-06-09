// rhomb.h
#pragma once
#include "parallelogram.h"

class Rhomb : public Parallelogram
{
protected:
    Rhomb(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
public:
    Rhomb();
    void set_rhomb(int* a, int* b, int* c, int* d, int* A, int* B, int* C, int* D);
    void print_info() override;
};