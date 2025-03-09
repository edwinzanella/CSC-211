#include <iostream>

void hostname(){
    std::string str;
    std::getline(std::cin, str);
    int length = str.length();

    for (int i = 0; i < length; i++) {
        str[i] = std::tolower(str[i]);
    }

    for (int i = 0; i < length; i++) {
        if (str[i] == '/') {
            int found = str.find('/') + 2;
            str = str.substr(found, length);
            break;
        }
    }

    length = str.length();

    for (int i = 0; i < length; i++) {
        if (str[i] == '/') {
            int found = str.find('/');
            str = str.substr(0, found);
            break;
        }
    }

    length = str.length();

    for (int i = 0; i < length; i++) {
        if (str[i] == ':') {
            int found = str.find(':');
            str = str.substr(0, found);
            break;
        }
    }

    std::cout << str << std::endl;
    return;
}

int main(){
    hostname();
    return 0;
}