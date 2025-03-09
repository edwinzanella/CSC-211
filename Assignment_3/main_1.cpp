#include <iostream>

int count_first(){
    int n, repeats = 1;
    std::cin >> n;
    int first = n;

    while (std::cin >> n) {
        if (n == first) {
            repeats++;
        }
    }

    return repeats;
}

int main(){
    int repeats = count_first();
    std::cout << repeats << std::endl;
    return 0;
}