#include <iostream>
#include <string>

int unique(){
    std::string str;
    std::getline(std::cin, str);
    int counter = 0;
    int length = str.length();

    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length; j++) {
            if (str[i] == str[j] && str[i] != 0 && j != i) {
                str[j] = 0;
            }
        }
    }

    for (int i = 0; i < length; i++) {
        if (str[i] != 0) {
            counter++;
        }
    }

    return counter;
}

int main(){
    int unique_characters = unique();
    std::cout << unique_characters << std::endl;
    return 0;
}