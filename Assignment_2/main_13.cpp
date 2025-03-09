#include <iostream>
#include <cmath>

int main() {
    int n, digits = 0, armstrong = 0, holder;
    std::cin >> n;
    holder = n;
    for (int i = n; i > 0; i /= 10) {
        digits++;
    }

    for (int i = 0; i < digits; i++) {
        int temp = n % 10;
        armstrong += pow(temp, digits);
        n /= 10;
    }

    if (armstrong == holder) {
        std::cout << "True" << std::endl;
    }
    else {
        std::cout << "False" << std::endl;
    }

    return 0;
}