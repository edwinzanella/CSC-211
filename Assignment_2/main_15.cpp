#include <iostream>

int main() {
    int n;
    std::cin >> n;

    //first row
    std::cout << "#";

    for (int i = 0; i < (n * 4); i++) {
        std::cout << "=";
    }

    std::cout << "#";
    std::cout << "\n";

    //between
    int counter = 2;
    int dot_counter = n - 1;

    for (int i = 0; i < (n * 2); i++) {
        std::cout << "|";

        //top left spaces
        for (int j = (n * 2) - (i * 2) - 2; j > 0; j--) {
            std::cout << " ";
        }

        //bottom left spaces
        if (i > n) {
            for (int j = counter; j > 0; j--) {
                std::cout << " ";
            }
        }

        std::cout << "<>";

        //upper dots
        if (i < n) {
            for (int j = i * 4; j > 0; j--) {
                std::cout << ".";
            }
        }

        //lower dots
        if (i >= n) {
            for (int j = dot_counter * 4; j > 0; j--) {
                std::cout << ".";
            }
            dot_counter--;
        }

        std::cout << "<>";

        //top right spaces
        if (i < n) {
            for (int j = ((n - 1) * 2) - (i * 2); j > 0; j--) {
                std::cout << " ";
            }
        }

        if (i > n) {
            for (int j = counter; j > 0; j--) {
                std::cout << " ";
            }
            counter += 2;
        }

        std::cout << "|" << std::endl;
    }
    
    //last row
    std::cout << "#";

    for (int i = 0; i < (n * 4); i++) {
        std::cout << "=";
    }

    std::cout << "#";
    std::cout << "\n";
    return 0;
}