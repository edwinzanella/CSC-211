#include <iostream>
#include <string>

void backspace(){
    std::string str;
    std::getline(std::cin, str);

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '<' && i > 0) {
            str.erase(i - 1, 2);
            i -= 2;
        }
        else if (str[i] == '<') {
            str.erase(i, 1);
            i--;
        }
    }

    std::cout << str << std::endl;
    return;
}

int main(){
    backspace();
    return 0;
}