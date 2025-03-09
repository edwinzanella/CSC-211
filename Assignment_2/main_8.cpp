#include <iostream>

int main(){
    int n, counter, top_counter, bottom_counter;
    std::cin >> n;
    counter = 0;
    top_counter = n - 2;
    bottom_counter = 1;

    if (n % 2 == 1) {
        for (int i = n; i > 0; i--) {
            if (i > n / 2) {
                for (int j = i; j < n; j++) {
                    std::cout << " ";
                }
            }

            if (i <= n / 2) {
                for (int j = n - counter - 1; j > 0; j--) {
                    std::cout << " ";
                }
            }

            std::cout << "*";

            if (i > n / 2) {
                for (int j = top_counter; j > 0; j--) {
                    std::cout << " ";
                }
                top_counter -= 2;
            }

            if (i <= n / 2) {
                for (int j = bottom_counter; j > 0; j--) {
                    std::cout << " ";
                }
                bottom_counter += 2;
            }

            if (i != n / 2 + 1) {
                std::cout << "*";
            }

            std::cout << "\n";
            counter++;
        }
    }

    else {
        std::cout << "Sorry, not odd" << std::endl;
    }

    return 0;
}