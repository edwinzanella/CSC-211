#include <iostream>

int digit_amount (long int n) {
    int digits;
    digits = 1;

    for (long int i = n; i >= 10; i /= 10) {
        digits++;
    }
    return digits;
}

int main(){

    long int digits, sum, n;
    std::cin >> n;
    sum = 0;

    digits = digit_amount(n);

    for (int i = digits; i > 0; i--) {
        int single = n % 10;
        if (single % 2 == 0) {
            sum += single;
        }
        n /= 10;
    }

    std::cout << sum << std::endl;
    return 0;

}