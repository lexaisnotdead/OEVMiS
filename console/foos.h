#pragma once
#include <iostream>
#include <cstring>
#include <assert.h>
#include <math.h>
//#include <windows.h>
//#include <conio.h>


void PrintMachine(const void *obj, const size_t OBJECT_SIZE);

//void Proch();

void SetNum();

void GetGraph(char *bybytes);

bool SwapBytes(char *bybytes);

template<typename T>
void Procc()
{
    T curr;

    std :: cout << "Введите данные" << std :: endl;
    std :: cin >> curr;

    PrintMachine(&curr, sizeof(curr));
}


static const char *k_base_symbols = "0123456789ABCDEFGHIJKLMNOPQRASUVWXYZ";

bool IsLegalNumber(const char *string, size_t base);
int AnyToDec(const char *string, size_t base, bool neg);
