#include <iostream>

void print(bool same){
    if (same == true) {
        std::cout << "True" << std::endl;
    }
    else {
        std::cout << "False" << std::endl;
    }

    return;
}

bool same_gmail(){
    std::string gmail1;
    std::string gmail2;
    std::cin >> gmail1 >> gmail2;
    int full_length1 = gmail1.length();
    int full_length2 = gmail2.length();

    for (int i = 0; i < full_length1; i++) {
        gmail1[i] = std::tolower(gmail1[i]);
    }

    for (int i = 0; i < full_length2; i++) {
        gmail2[i] = std::tolower(gmail2[i]);
    }

    std::string before1 = gmail1.substr(0, full_length1 - 10);
    std::string before2 = gmail2.substr(0, full_length2 - 10);
    int before_length1 = before1.length();
    int before_length2 = before2.length();

    for (int i = 0; i < before_length1; i++) {
        if (before1[i] == '+') {
            int plus = before1.find('+');
            before1 = before1.substr(0, plus);
            break;
        }
    }

    for (int i = 0; i < before_length2; i++) {
        if (before2[i] == '+') {
            int plus = before2.find('+');
            before2 = before2.substr(0, plus);
            break;
        }
    }

    std::string at = "@";
    before1.append(at);
    before2.append(at);

    int i = 0;
    while(before1[i] != '@') {
        if (before1[i] == '.') {
            before1.erase(before1.begin() + i);
            i--;
        }
        i++;
    }

    i = 0;
    while(before2[i] != '@') {
        if (before2[i] == '.') {
            before2.erase(before2.begin() + i);
            i--;
        }
        i++;
    }

    if (before1 == before2) {
        return true;
    }
    else {
        return false;
    }
}

int main(){
    bool same = same_gmail();
    print(same);
    return 0;
}