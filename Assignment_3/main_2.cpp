#include <iostream>
#include <string>

void print (int is_true) {
    if (is_true == true) {
        std::cout << "True" << std::endl;
    }
    else {
        std::cout << "False" << std::endl;
    }

    return;
}

bool palindrome() {
    std::string str;
    std::getline(std::cin, str);
    int length = str.length();

    for (int i = 0; i < length; i++) {
        str[i] = std::tolower(str[i]);
    }

    for (int i = 0; i < length; i++) {
        if (str[i] != str[length - i - 1]) {
            return false;
        }
    }

    return true;
}

int main(){
    bool is_true;
    is_true = palindrome();
    print(is_true);
    return 0;
}