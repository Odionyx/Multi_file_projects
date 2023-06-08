// task1_mathematic_functions.cpp :
#include <iostream>
#include "math_function.h"

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "ru_RU");
    int a, b, c;
    a = b = c = 0;

    std::cout << "Введите первое число: ";
    std::cin >> a;
    std::cout << "Введите второе число: ";
    std::cin >> b;

    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> c;

    switch (c)
    {
    case 1: std::cout << a << " + " << b << " = " << addition(a, b);
        break;
    case 2: std::cout << a << " - " << b << " = " << subtraction(a, b);
        break;
    case 3: std::cout << a << " * " << b << " = " << multiplication(a, b);
        break;
    case 4: 
        if (!b) { std::cout <<"Неверный ввод!";}
          else  { std::cout << a << " / " << b << " = " << division(a, b); }
        break;
    case 5: std::cout << a << " в степени " << b << " = " << degree(a, b);
        break;
    default:
        std::cout << "Неверный ввод!";
        break;
    }
    return 0;
}