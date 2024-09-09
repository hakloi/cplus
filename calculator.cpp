// Написать программу-калькулятор.
// При запуске выдает меню для выбора операции (умножение, деление, остаток, сумма, разность)
// При выборе пункта меню запрашиваются операнды и выводится результат операции.
// * Добавить возможность использовать в вычислении ранее введенные данные (для этого создать подменю)

#include <iostream>

using namespace std;

int main(){
    cout << "Choose operation:\n 1. Multiplication\n 2. Division\n 3. Remainder\n 4. Sum \n 5. Difference\n";

    int choice = 0;
    int n1 = 0;
    int n2 = 0;
    int res = 0;

    cin >> choice;

    cout << "Great! Write the first number:\n";
    cin >> n1;
    cout << "Great! Write the second number:\n";
    cin >> n2;

    switch(choice){
        case 1:
            res = n1 * n2;
            cout << "Result of multiplaction" << res;
        case 2:
            res = n1 / n2;
            cout << "Result of division" << res;
        case 3:
            res = n1 % n2;
            cout << "Remainder" << res;
        case 4:
            res = n1 + n2;
            cout << "Sum" << res;
        case 5:
            res = n1 * n2;
            cout << "Result of differece" << res;
        default:
            cout << "Wrong choice!";
    }
}