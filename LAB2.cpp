#include <iostream> //подключаем основную библиотеку в с++

using namespace std; //подключаем основное пространство имен

int main()
{
    setlocale(LC_ALL, "rus");

    int sum = 0;

    for (int a = 0; a != 200; a++)
    {
        if (a % 3 == 0)
        {
            sum += a;
        }
    }
    cout << "Сумма чисел = " << sum << endl;
    return 0;
}

