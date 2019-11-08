#include "foofoos.h"


void PrintMachine(const void *obj, const size_t OBJECT_SIZE)
{
    u_char *uobj = (u_char *) obj;

    std :: cout << "Внутреннее представление = ";

    for (unsigned i = 0; i < OBJECT_SIZE; ++i, --uobj)
    {
        u_char mask = ~0;
        mask >>= 1;
        mask = ~mask;


        while (mask)
        {
            if (*uobj & mask)
                std :: cout << '1';
            else
                std :: cout << '0';

            mask >>= 1;
        }
        std :: cout << ' ';
    }
    std :: cout << std :: endl;
}

void foo()
{
    int a = 0;

    std :: cout << "Введите число в двоичной системе счисления" << std :: endl;

    char c;
    std :: cin.ignore(1, '\n');
    while((c = getchar()) != '\n')
    {
        a <<= 1;
        a += (c - '0') & 1;
    }
    std :: cout << a << std :: endl;

    PrintMachine(&a, sizeof(a));
}


void SetNum()
{
    short NumSys;

    std :: cout << "Введите основание системы счисления" << std :: endl;

    std :: cin >> NumSys;

    switch (NumSys)
    {
    case 2:
    {
        foo();
        break;
    }
    default:
        break;
    }
}


void Proch()
{
    std :: cin.ignore(1, '\n');

    std :: string ThisLine;

    std :: cout << "Введите данные" << std :: endl;
    std :: getline(std :: cin, ThisLine);
    PrintMachine(&ThisLine, sizeof(ThisLine));
}
