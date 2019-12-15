#include "foos.h"

void PrintMachine(const void *obj, const size_t OBJECT_SIZE)
{
    char *bybytes = new char;
    int k = 0;

    u_char *uobj = (u_char *) obj;

    std :: cout << "Внутреннее представление = ";

    for (unsigned i = 0; i < OBJECT_SIZE; ++i, ++uobj)
    {
        u_char mask = ~0;
        mask >>= 1;
        mask = ~mask;


        while (mask)
        {
            if (*uobj & mask)
            {
                std :: cout << '1';
                bybytes[k] = '1';
                ++k;
            }
            else
            {
                std :: cout << '0';
                bybytes[k] = '0';
                ++k;
            }

            mask >>= 1;
        }
        std :: cout << ' ';
    }
    std :: cout << std :: endl;
    bybytes[k] = '\0';

    GetGraph(bybytes);

    assert(SwapBytes(bybytes));
}


void SetNum()
{
    size_t base;
    char* expr = new char;
    int res;
    bool neg = false;

    std :: cout << "Введите основание системы счисления" << std :: endl;

    std :: cin >> base;

    std :: cout << "Введите число в этой системе счисления" << std :: endl;

    std :: cin.ignore(1, '\n');
    std :: cin.getline(expr, 25);

    if (expr[0] == '-')
    {
        for (int i = 0; i < strlen(expr) - 1; ++i)
            expr[i] = expr[i + 1];
        expr[strlen(expr) - 1] = '\0';
        neg = true;
    }

    res = AnyToDec(expr, base, neg);

    PrintMachine(&res, sizeof(res));

}


//void Proch()
//{
//    std :: cin.ignore(1, '\n');

//    std :: string ThisLine;

//    std :: cout << "Введите данные" << std :: endl;
//    std :: getline(std :: cin, ThisLine);
//    PrintMachine(&ThisLine, sizeof(ThisLine));
//}


bool IsLegalNumber(const char *string, size_t base)
{
    const char *base_symbols = k_base_symbols;

    const char *symbol = string;
    int i = 0;
    while (symbol[i] != '\0')
    {
        const char *position = strchr(base_symbols, symbol[i]);
        if (position == nullptr || position - base_symbols + 1 > base)
            return false;
        ++i;
    }

    return true;
}

int AnyToDec(const char *string, size_t base, bool neg)
{
    const char *base_symbols = k_base_symbols;
    int result = 0;
    size_t string_length = strlen(string);
    assert(base <= strlen(base_symbols));
    assert(IsLegalNumber(string, base));
    for (int i = string_length - 1, counter = 0; i >= 0; --i, ++counter)
    {
        int digit = strchr(base_symbols, string[i]) - base_symbols;
        result += digit * pow(base, counter);
    }

    if (neg)
        result *= (-1);

    std :: cout << "Ваше число в десятичной системе счисления: ";
    std :: cout << result << std :: endl;

    return result;
}


void GetGraph(char *bybytes)
{
    for (int i = 0; i < strlen(bybytes); ++i)
    {
        if (bybytes[i] == '1')
            std :: cout << "|" << "-" << "|";
        else
            std :: cout << "_";
    }
    std :: cout << std :: endl;
}


bool SwapBytes(char *bybytes)
{
    int a, b;
    char tmp;

    std :: cout << "Введите номера битов, которые нужно поменять местами" << std :: endl;
    std :: cin >> a >> b;

    if (a > strlen(bybytes) || b > strlen(bybytes))
    {
        std :: cout << "ERROR" << std :: endl;
        return false;
    }

    tmp = bybytes[a];
    bybytes[a] = bybytes[b];
    bybytes[b] = tmp;

    for (int i = 0; i < strlen(bybytes); ++i)
    {
        if ((i) % 8 == 0 && i != 0)
            std :: cout << ' ';
        if (i == a || i == b)
        {
            if (bybytes[i] == '1')
                std :: cout << "\x1b[33m1\x1b[0m";
            else if (bybytes[i] == '0')
                std :: cout << "\x1b[33m0\x1b[0m";
        }
        else
            std :: cout << bybytes[i];
    }
    std :: cout << std :: endl;

    return true;
}
