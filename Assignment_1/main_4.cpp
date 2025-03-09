#include <iostream>

int main(){

    int a, b, d;
    char c;
    std::cin >> a >> b >> c;

    if (c == '+'){

        d = a + b;
        std::cout << a << " + " << b << " = " << d << std::endl;

    }

    else if (c == '-'){

        d = a - b;
        std::cout << a << " - " << b << " = " << d << std::endl;

    }

    else if (c == '*'){

        d = a * b;
        std::cout << a << " * " << b << " = " << d << std::endl;

    }

    else if (c == '/'){

        d = a / b;
        std::cout << a << " / " << b << " = " << d << std::endl;

    }

    return 0;

}