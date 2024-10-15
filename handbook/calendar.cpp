#include <iostream>
#include <iomanip>
using namespace std;

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
