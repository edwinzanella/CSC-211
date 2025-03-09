#include <iostream>

int main(){

    char grade;
    std::cin >> grade;

    if (grade == 'a' || grade == 'A') {

        std::cout << "Excellent" << std::endl;

    }

    if (grade == 'b' || grade == 'B') {

        std::cout << "Good" << std::endl;
        
    }

    if (grade == 'c' || grade == 'C') {

        std::cout << "Average" << std::endl;
        
    }

    if (grade == 'd' || grade == 'D') {

        std::cout << "Poor" << std::endl;
        
    }

    if (grade == 'f' || grade == 'F') {

        std::cout << "Failing" << std::endl;
        
    }

    return 0;
    
}