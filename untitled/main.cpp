#include "foofoos.h"

using namespace std;

//template<typename T>
//void bar(T n) {
//    int arr[sizeof(n)];

//    for (unsigned i = 0; i < sizeof(n); ++i) {
//        arr[i] = n & 1;
//        n >>= 1;
//    }
//    for (unsigned i = 0; i < sizeof(n); ++i)
//        cout << arr[i] << ' ';

//    cout << endl;
//}

//системы счисления
//вывод символов, контроль


int main()
{
    setlocale(LC_ALL, "Russian");
    bool answer;
    do
    {
        short data_type;

        cout << "Выберите тип данных" << endl;
        cout << "1 - int    2 - double    3 - float    4 - char    5 - string" << endl;
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
        case 5:
        {
            Proch();
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
