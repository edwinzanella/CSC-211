#include <iostream>

int main() {
    double loan, interest, payment;
    int month = 0;
    std::cin >> loan >> interest >> payment;

    while (loan > 0) {
        loan += (interest * loan);
        loan -= payment;
        month += 1;
    }

    std::cout << month << std::endl;
    return 0;
}