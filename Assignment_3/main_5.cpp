#include <iostream>
#include <string>

void filter_dups(){
    std::string str;
    std::getline(std::cin, str);
    int length = str.length();
    for (int i = 1; i < length; i++) {
        if (str[i] == str[i - 1]) {
            str[i - 1] = 0;
        }
    }

    for (int i = 0; i < length; i++) {
        if (str[i] != 0) {
            std::cout << str[i];
        }
    }

    std::cout << "\n";
    return;
}

int main(){
    filter_dups();
    return 0;
}