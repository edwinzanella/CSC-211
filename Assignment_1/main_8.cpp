#include <iostream>

int main(){

    int a;
    std::cin >> a;

    if (abs(a) % 10 == 9){

        std::cout << a << " is good" << std::endl;

    }

    else {

        std::cout << a << " is no good" << std::endl;

    }

    return 0;

}