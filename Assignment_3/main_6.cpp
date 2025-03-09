#include <iostream>
#include <string>

int str_hash(){
    std::string str;
    std::getline(std::cin, str);
    int length = str.length();
    int hash = 0;

    for (int i = 0; i < length; i++) {
        hash += str[i];
    }

    return hash;
}

int main(){
    int hash = str_hash();
    std::cout << hash << std::endl;
    return 0;
}