#pragma once
#include <iostream>
#include <string>

void PrintMachine(const void *obj, const size_t OBJECT_SIZE);

void foo();

void Proch();

void SetNum();

template<typename T>
void Procc()
{
    T curr;

//    if (T == <int>)
//        foo();

    std :: cout << "Введите данные" << std :: endl;
    std :: cin >> curr;

    PrintMachine(&curr, sizeof(curr));
}
