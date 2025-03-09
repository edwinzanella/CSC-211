#include <iostream>

int main(){

    int a, b;
    std::cin >> a;
    b = a % 2;

    if (b == 0){
        
        std::cout << a << " is even" << std::endl;

    }

    else{

        std::cout << a << " is odd" << std::endl;

    }
    
    return 0;

}