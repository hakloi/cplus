#include <iostream>
#include <iomanip>
using namespace std;

// Печать календаря

// Напечатайте месяц из календаря по заданному начальному дню 
// и количеству дней. Ваш ответ должен выглядеть примерно так:

//                    1
//  2  3  4  5  6  7  8
//  9 10 11 12 13 14 15
// 16 17 18 19 20 21 22
// 23 24 25 26 27 28 29
// 30 31

int main()
{
    int n, k;
    cin >> n >> k;
    
    int day = 1;

    for (int i = 1; i < n; i++) {
        cout << "   "; 
    }

    for (int i = n; i <= 7 && day <= k; i++) {
        cout << setw(2) << day++;
        if (i != 7 && day <= k) cout << " ";
    }
    cout << endl; 

    while (day <= k) {
        for (int i = 1; i <= 7 && day <= k; i++) {
            cout << setw(2) << day++;
            if (i != 7 && day <= k) cout << " "; 
        }
        cout << endl;
    }

    return 0;
}
