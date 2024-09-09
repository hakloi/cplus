// Написать программу-калькулятор.
// При запуске выдает меню для выбора операции (умножение, деление, остаток, сумма, разность)
// При выборе пункта меню запрашиваются операнды и выводится результат операции.
// * Добавить возможность использовать в вычислении ранее введенные данные (для этого создать подменю)

#include <iostream>

using namespace std;

int main(){
    int choice = 0;
    int n1 = 0;
    int n2 = 0;
    int res = 0;
    bool running = true;

    cout << "Welcome to the calculator app!" << endl;

    cout << "Great! Write the first number: " << endl;
    cin >> n1;
    cout << "Great! Write the second number: " << endl;
    cin >> n2;
    
    cout << "Choose operation:\n 1. Multiplication\n 2. Division\n 3. Remainder\n 4. Sum \n 5. Difference\n 6. Use previous numbers\n 7. Exit\n";
    cin >> choice;
        
    switch(choice){
        case 1:
            res = n1 * n2;
            cout << "Result of multiplaction " << res << endl;
            break; 
        case 2:
            if (n2 == 0){
                cout << "You can not divide by zero!" << endl;
                break;
            }
            res = n1 / n2;
            cout << "Result of division " << res << endl;
            break; 
        case 3:
            res = n1 % n2;
            cout << "Remainder " << res << endl;
            break; 
        case 4:
            res = n1 + n2;
            cout << "Sum " << res << endl;
            break; 
        case 5:
            res = n1 - n2;
            cout << "Result of differece " << res << endl;
            break; 
        default:
            cout << "Wrong choice!" << endl;
    }
    
}