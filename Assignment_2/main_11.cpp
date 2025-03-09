#include <iostream>

int main(){
    char letter;
    std::cin >> letter;
    int pos_counter = 1;

    for (int i = letter - 64; i > 0; i--) {
        for (int j = i - 1; j > 0; j--) {
            std::cout << "  ";
        }

        for (int j = 0; j < pos_counter; j++) {
            char temp_letter = 65 + j;
            std::cout << temp_letter;
            if (i != letter - 64) {
                std::cout << " ";
            }
        }

        for (int j = 0; j < pos_counter - 1; j++) {
            char temp_letter = letter - i - j;
            std::cout << temp_letter;

            if (temp_letter != 'A'){
                std::cout << " ";
            }
        }

        pos_counter++;
        std::cout << "\n";
    }

    return 0;
}