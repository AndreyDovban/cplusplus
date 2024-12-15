// Подключение библиотек
#include <iostream>

// Выбор пространства имён
using namespace std;

// Основная функция приложения
int main()
{
    int a;
    a = 5;

    char f = 'f';

    bool b = false;

    // Правило объявления констант
    const int COUNT_DAYS_IN_WEEK = 7;

    cout
        << a
        << f
        << b
        << COUNT_DAYS_IN_WEEK
        << endl;

    return 0;
}
