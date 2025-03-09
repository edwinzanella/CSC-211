#include <iostream>

int main(){

    double c, f;
    std::cin >> c;
    f = (c * 9 / 5) + 32;
    
    if (f <= 32) {

        std::cout << "It is cold out" << std::endl;

    }

    else if (f > 32 && f <= 65) {

        std::cout << "Wear a jacket" << std::endl;

    }

    else {

        std::cout << "It is nice out" << std::endl;
        
    }

    return 0;

}