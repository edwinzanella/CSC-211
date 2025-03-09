#include <iostream>

int main(){
    
    int a, b, c, d;
    std::cin >> a >> b >> c;
    d = a;

    if (b < d) {

        d = b;

    }
    
    if (c < d) {

        d = c;

    }

    std::cout << "The smallest number entered was " << d << std::endl;
    return 0;
}