#include <iostream>

int main(){
    int n, holder, sum = 0;
    std::cin >> n;

    for (int i = n - 1; i > 0; i--) {
        if (n % i == 0) {
            sum += i;
        }
    }

    if (sum == n) {
        std::cout << "True" << std::endl;
    }
    else {
        std::cout << "False" << std::endl;
    }

    return 0;
}