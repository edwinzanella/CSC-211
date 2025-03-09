#include <iostream>
#include <string>

void char_swap() {
    std::string str;
    std::getline(std::cin, str);
    int length = str.length();
    
    for (int i = 0; i < length / 2; i++) {
        std::swap(str[i], str[length - i - 1]);
    }

    std::cout << str << std::endl;
    return;
}

int main(){
    char_swap();
    return 0;
}