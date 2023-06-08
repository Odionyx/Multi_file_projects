// task2_class.cpp
#include <iostream>
#include <Windows.h>
#include "Header.h"


void counter()
{
    int num, num2, size;
    num = num2 = size = 0;
    char ch = ' ';
    bool b = true;

    Counter count;
    std::string str;
    while (b) {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> str;
        std::string str1 = "да";
        std::string str2 = "нет";

        if (str1 == str) {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> num;
            count = Counter(&num);
            b = false;
        } else if (str2 == str) {
            count = Counter();   
            b = false;
        } else { std::cout << "Неверный ввод!" << std::endl; }
    } 

    while (ch != 'х') {
        std::cout << "Введите команду('+', '-', '=' или 'x'): ";
        std::cin >> ch;
        switch (ch)
        {
        case '+': //* увеличьте счётчик на 1
            count.inc();
            break;
        case '-': //* уменьшите счётчик на 1
            count.dec();
            break;
        case '=': //* выведите текущее значение счётчика
            count.get_count();
            break;
        case 'х': //* завершите работу программы
            std::cout << "До свидания!" << std::endl;
            break;
        }
    }
}

int main(int argc, char** argv)
{
    setlocale(LC_ALL, ".1251");
    SetConsoleCP(1251);
    counter();
    return 0;
}
// Thanks for the tutorial!