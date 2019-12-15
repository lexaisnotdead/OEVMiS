#include <QCoreApplication>
#include <QTextStream>
#include "foos.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    bool answer;
    do
    {
//        system("color 02");
        cout << "Выберите цвет текста" << endl;
        cout << " 1 - по умолчанию \n 2 - черный \n 3 - красный \n 4 - зеленый \n 5 - желтый \n 6 - синий \n 7 - фиолетовый \n 8 - ярко-зеленый \n 9 - ярко-желтый \n 10 - ярко-синий \n 11 - ярко-фиолетовый \n 12 - бирюзовый" << endl;
        short forecolor, backcolor;
        cin >> forecolor;
        cout << "Выберите цвет фона" << endl;
        cout << " 1 - по умолчанию \n 2 - черный \n 3 - красный \n 4 - зеленый \n 5 - желтый \n 6 - синий \n 7 - фиолетовый \n 8 - ярко-зеленый \n 9 - ярко-желтый \n 10 - ярко-синий \n 11 - ярко-фиолетовый \n 12 - бирюзовый" << endl;
        cin >> backcolor;

        switch (forecolor)
        {
        case 1:
        {
            std :: cout << "\x1b[39mx1b[0m";
            break;
        }
        case 2:
        {
            std :: cout << "\x1b[30mxb1[0m";
            break;
        }
        case 3:
        {
            std :: cout << "\x1b[31mx1b[0m";
            break;
        }
        case 4:
        {
            std :: cout << "\x1b[32mx1b[0m";
            break;
        }
        case 5:
        {
            std :: cout << "\x1b[33mx1b[0m";
            break;
        }
        case 6:
        {
            std :: cout << "\x1b[34mx1b[0m";
            break;
        }
        case 7:
        {
            std :: cout << "\x1b[35mx1b[0m";
            break;
        }
        case 8:
        {
            std :: cout << "\x1b[92mx1b[0m";
            break;
        }
        case 9:
        {
            std :: cout << "\x1b[93mx1b[0m";
            break;
        }
        case 10:
        {
            std :: cout << "\x1b[94mx1b[0m";
            break;
        }
        case 11:
        {
            std :: cout << "\x1b[95mx1b[0m";
            break;
        }
        case 12:
        {
            std :: cout << "\x1b[96mx1b[0m";
            break;
        }
        default:
            break;
        }


        switch (backcolor)
        {
        case 1:
        {
            std :: cout << "\x1b[49mx1b[0m";
            break;
        }
        case 2:
        {
            std :: cout << "\x1b[40mxb1[0m";
            break;
        }
        case 3:
        {
            std :: cout << "\x1b[41mx1b[0m";
            break;
        }
        case 4:
        {
            std :: cout << "\x1b[42mx1b[0m";
            break;
        }
        case 5:
        {
            std :: cout << "\x1b[43mx1b[0m";
            break;
        }
        case 6:
        {
            std :: cout << "\x1b[44mx1b[0m";
            break;
        }
        case 7:
        {
            std :: cout << "\x1b[45mx1b[0m";
            break;
        }
        case 8:
        {
            std :: cout << "\x1b[102mx1b[0m";
            break;
        }
        case 9:
        {
            std :: cout << "\x1b[103mx1b[0m";
            break;
        }
        case 10:
        {
            std :: cout << "\x1b[104mx1b[0m";
            break;
        }
        case 11:
        {
            std :: cout << "\x1b[105mx1b[0m";
            break;
        }
        case 12:
        {
            std :: cout << "\x1b[106mx1b[0m";
            break;
        }
        default:
            break;
        }
        short data_type;

        cout << "Выберите тип данных" << endl;
        cout << "1 - int    2 - double    3 - float    4 - char" << endl;
        cin >> data_type;

        switch (data_type)
        {
        case 1:
        {
            SetNum();
            break;
        }
        case 2:
        {
            Procc<double>();
            break;
        }
        case 3:
        {
            Procc<float>();
            break;
        }
        case 4:
        {
            Procc<char>();
            break;
        }
        default:
            break;
        }

        cout << "Хотите повторить?" << endl;
        cout << "1 - ДА    0 - НЕТ " << endl;
        cin >> answer;

    }while(answer);
}
