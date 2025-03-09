#include <iostream>
#include <iomanip>

int main(){

    double temp, converted;
    char degree;
    std::cin >> temp >> degree;

    if (degree == 'C') {

        converted = (temp * 9 / 5) + 32;
        std::cout << std::setprecision(4) << std::fixed << temp << " degree(s) " << degree << " is equal to " << converted << " degree(s) F" << std::endl;
    }

    if (degree == 'F') {

        converted = (temp - 32) * 5 / 9;
        std::cout << std::setprecision(4) << std::fixed << temp << " degree(s) " << degree << " is equal to " << converted << " degree(s) C" << std::endl;

    }

    return 0;

}