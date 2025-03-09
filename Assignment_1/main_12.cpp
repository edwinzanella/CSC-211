#include <iostream>
#include <iomanip>

int main(){
    
    double a, b, c, d;
    std::cin >> a >> b >> c;
    d = (a + b + c) / 3;
    std::cout << std::setprecision(4) << std::fixed << "The average of " << a << ", " << b << ", and " << c << " is " << d << std::endl;
    return 0;

}