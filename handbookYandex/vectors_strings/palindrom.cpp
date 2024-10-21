// На вход подается одна строка. В строке могут быть пробелы. 
// Подряд может идти произвольное число пробелов. 
// Длина строки не превосходит 100.

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main()
{
    std::string s;
    std::string res;
    std::getline(std::cin, s);
    
    for (char c : s){
        if (c != ' '){
            res += c;
        }
    }
    
    std::string rev = res;
    std::reverse(rev.begin(), rev.end());

    if (res == rev){
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
    
    return 0;
}


// Формат вывода
// Представьте, что из строки удалили все пробелы. 
// Необходимо вывести YES, если полученная строка — 
// палиндром, и NO в противном случае.

// Пример 1
// Ввод
// hello world
// Вывод
// NO
// Пример 2
// Ввод
// never odd or even
// Вывод
// YES