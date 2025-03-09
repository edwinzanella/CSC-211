#include <iostream>
#include <cmath>

int main (){
    int n, digits = 0, stored;
    std::cin >> n;
    stored = n;
    bool prime = true;

    for (int i = n; i > 0; i /= 10) {
        digits++;
    }

    int arr[digits];

    for (int i = 0; i < digits; i++) {
        int temp = n % 10;
        n /= 10;
        temp *= pow(10, digits - 1);
        n += temp;
        arr[i] = n;
    }

    for (int i = 0; i < digits; i++) {
        for (int j = arr[i] - 1; j > 1; j--) {
            if (arr[i] % j == 0) {
                prime = false;
                break;
            }
        }
    }

    if (n == 1) {
        prime = false;
    }

    if (prime == false) {
        std::cout << "False" << std::endl;
    }
    else {
        std::cout << "True" << std::endl;
    }

    return 0;
}