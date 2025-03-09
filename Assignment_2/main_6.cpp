#include <iostream>

int main(){
    int n, s, sum;
    std::cin >> n >> s;
    sum = n;

    for (int i = s; i > 1; i--) {
        n -= 1;
        sum += n;
    }

    std::cout << sum << std::endl;
    return 0;

}