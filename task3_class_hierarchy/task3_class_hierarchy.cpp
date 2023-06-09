// task3_class_hierarchy.cpp
#include "figure.h"
#include "triangle.h"
#include "quadrilateral.h"
#include "right_tri.h"
#include "isosceles_tri.h"
#include "equilateral_tri.h"
#include "parallelogram.h"
#include "rectangle.h"
#include "rhomb.h"
#include "quadrate.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "ru_RU");

    Figure figure;
    Triangle triangle;

    Figure* f = &triangle;
    f->print_info();

    Right_tri right_tri;
    f = &right_tri;
    f->print_info();

    Isosceles_tri isosceles_tri;
    f = &isosceles_tri;
    f->print_info();

    Equilateral_tri equilateral_tri;
    f = &equilateral_tri;
    f->print_info();

    Quadrilateral quadrilateral;
    f = &quadrilateral;
    f->print_info();

    Parallelogram parallelogram;
    f = &parallelogram;
    f->print_info();

    Rectangle rectangle;
    f = &rectangle;
    f->print_info();

    Rhomb rhomb;
    f = &rhomb;
    f->print_info();

    Quadrate quadrate;
    f = &quadrate;
    f->print_info();

    return 0;
}
/* Thanks for the tutorial! */