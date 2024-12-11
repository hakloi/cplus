// Сумма цифр
// Вычислите сумму цифр неотрицательного целого числа.
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;

    int res = 0;
    while (num > 0){
        res += num % 10;
        num = num / 10;
    } 
    cout << res << endl;
}

// Пример
// Ввод
// 59
// Вывод
// 14