#include <iostream>

int main(){
    int n, fact = 1;
    std::cin >> n;

    for (int i = n; i > 0; i--) {
        fact *= i;
    }

    if (n >= 13) {
        std::cout << "Can't handle this" << std::endl;
    }

    else {
        std::cout << fact << std::endl;
    }

    return 0;
}