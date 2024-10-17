#include <iostream>
#include <string>

// Известный алгоритм Soundex определяет, 
// похожи ли два английских слова по звучанию. 
// На вход он принимает слово и заменяет его
//  на некоторый четырёхсимвольный код. Если 
//  коды двух слов совпадают, то слова, как правило, 
//  звучат похоже.

int main(){
    std::string s;
    std::cin >> s;

    std::string res(1, s[0]);

    char prev_digit = '0';  
    for (size_t i = 1; i != s.size(); ++i) {
        char current_digit = '0'; 

        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'h' || s[i] == 'i' || 
            s[i] == 'o' || s[i] == 'u' || s[i] == 'w' || s[i] == 'y') {
            continue;
        }

        if (s[i] == 'b' || s[i] == 'f' || s[i] == 'p' || s[i] == 'v') {
            current_digit = '1';
        } else if (s[i] == 'c' || s[i] == 'g' || s[i] == 'j' || s[i] == 'k' || 
                   s[i] == 'q' || s[i] == 's' || s[i] == 'x' || s[i] == 'z') {
            current_digit = '2';
        } else if (s[i] == 'd' || s[i] == 't') {
            current_digit = '3';
        } else if (s[i] == 'l') {
            current_digit = '4';
        } else if (s[i] == 'm' || s[i] == 'n') {
            current_digit = '5';
        } else if (s[i] == 'r') {
            current_digit = '6';
        }

        if (current_digit != prev_digit && current_digit != '0') {
            res += current_digit;
            prev_digit = current_digit;
        }
        
    }
    
    while (res.size() != 4)
    {
        if (res.size() < 4) {
            res.push_back('0');
        }
        else {
            res.pop_back();
        }
    }  
    
    std::cout << res << std::endl;
    


    return 0;
}

// Примеры:

// ammonium → ammnm → a5555 → a5 → a500.

// implementation → implmnttn → i51455335 → i514535 → i514.