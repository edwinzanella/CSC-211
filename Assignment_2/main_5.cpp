#include <iostream>

int main(){
    int n, i;
    bool prime = true;
    std::cin >> n;
    i = n - 1;

    while (i > 1) {
        if (n % i == 0) {
            prime = false;
            break;
        }
        i--;
    }

    if (n == 1) {
        prime = false;
    }

    if (prime == true) {
        std::cout << "True" << std::endl;
    }

    else {
        std::cout << "False" << std::endl;
    }

    return 0;
}