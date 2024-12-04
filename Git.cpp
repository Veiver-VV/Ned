#include <iostream>
#include <cctype> 
#include <string>

int main() {
    std::string symbol;
    std::cout << "16 tañbaly san engiziñiz: ";
    std::cin >> symbol;


    if (symbol.length() == 16) {
        bool is_valid = true;
        for (char c : symbol) {
            if (!isdigit(c)) {
                is_valid = false;
                break;
            }
        }

        if (is_valid) {
            std::cout << "Engizilgen san 16 tañbaly san bolyp tabylady.\n";
        }
        else {
            std::cout << "Engizilgen san san emes.\n";
        }
    }
    else {
        std::cout << "Engizilgen san 16 tañbaly san emes.\n";
    }

    return 0;
}
