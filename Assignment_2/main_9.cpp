#include <iostream>

int main(){
    int a, b, c;
    std::cin >> a >> b >> c;
    int print = a;

    for (int i = b - a + 1; i > 0; i -= c) {
        for (int j = print; j > 0; j--) {
            std::cout << "+";
        }
        std::cout << "\n";
        print += c;
    }

print -= c;

    for (int i = b - a + 1; i > 0; i -=c) {
        for (int j = print; j > 0; j--) {
            std::cout << "+";
        }
        std::cout << "\n";
        print -=c;
    }

    return 0;
}