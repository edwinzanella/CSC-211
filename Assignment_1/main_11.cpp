#include <iostream>

int main(){

    int a, b, c;
    std::cin >> a >> b >> c;

    switch (a){

        case 1:

            std::cout << "January " << b << ", " << c << std::endl;
            break;

        case 2:
        
            std::cout << "February " << b << ", " << c << std::endl;
            break;

        case 3:

            std::cout << "March " << b << ", " << c << std::endl;
            break;

        case 4:

            std::cout << "April " << b << ", " << c << std::endl;
            break;

        case 5:

            std::cout << "May " << b << ", " << c << std::endl;
            break;

        case 6:

            std::cout << "June " << b << ", " << c << std::endl;
            break;

        case 7:

            std::cout << "July " << b << ", " << c << std::endl;
            break;

        case 8:

            std::cout << "August " << b << ", " << c << std::endl;
            break;

        case 9:

            std::cout << "September " << b << ", " << c << std::endl;
            break;

        case 10:

            std::cout << "October " << b << ", " << c << std::endl;
            break;

        case 11:

            std::cout << "November " << b << ", " << c << std::endl;
            break;

        case 12:

            std::cout << "December " << b << ", " << c << std::endl;
            break;

        default:

            std::cout << "Imaginary month" << std::endl;

    }

    return 0;
    
}