#include <iostream>

int main() {
    int r, g, b;
    std::cin >> r >> g >> b;
    int hex[6];
    std::cout << "#";
    char stored_letter_1 = -1, stored_letter_2 = -1;
    int stored_number_1 = -1, stored_number_2 = -1;

    for (int i = 0; i < 2; i++) {
        hex[i] = r % 16;

        if (i == 0) {
            if (hex[i] >= 10) {
                char convert = 55;
                convert += hex[i];
                stored_letter_2 = convert;
            }
            else {
                stored_number_2 = hex[i];
            }
        }
        else {
            if (hex[i] >= 10) {
                char convert = 55;
                convert += hex[i];
                stored_letter_1 = convert;
            }
            else {
                stored_number_1 = hex[i];
            }
        }

        r /= 16;
    }

    if (stored_number_1 == -1) {
        std::cout << stored_letter_1;
    }
    else {
        std::cout << stored_number_1;
    }

    if (stored_number_2 == -1) {
        std::cout << stored_letter_2;
    }
    else {
        std::cout << stored_number_2;
    }

    stored_number_1 = -1;
    stored_letter_1 = -1;
    stored_number_2 = -1;
    stored_letter_2 = -1;

    for (int i = 2; i < 4; i++) {
        hex[i] = g % 16;

        if (i == 2) {
            if (hex[i] >= 10) {
                char convert = 55;
                convert += hex[i];
                stored_letter_2 = convert;
            }
            else {
                stored_number_2 = hex[i];
            }
        }
        else {
            if (hex[i] >= 10) {
                char convert = 55;
                convert += hex[i];
                stored_letter_1 = convert;
            }
            else {
                stored_number_1 = hex[i];
            }
        }

        g /= 16;
    }

    if (stored_number_1 == -1) {
        std::cout << stored_letter_1;
    }
    else {
        std::cout << stored_number_1;
    }

    if (stored_number_2 == -1) {
        std::cout << stored_letter_2;
    }
    else {
        std::cout << stored_number_2;
    }

    stored_number_1 = -1;
    stored_letter_1 = -1;
    stored_number_2 = -1;
    stored_letter_2 = -1;

    for (int i = 4; i < 6; i++) {
        hex[i] = b % 16;

        if (i == 4) {
            if (hex[i] >= 10) {
                char convert = 55;
                convert += hex[i];
                stored_letter_2 = convert;
            }
            else {
                stored_number_2 = hex[i];
            }
        }
        else {
            if (hex[i] >= 10) {
                char convert = 55;
                convert += hex[i];
                stored_letter_1 = convert;
            }
            else {
                stored_number_1 = hex[i];
            }
        }

        b /= 16;
    }

    if (stored_number_1 == -1) {
        std::cout << stored_letter_1;
    }
    else {
        std::cout << stored_number_1;
    }

    if (stored_number_2 == -1) {
        std::cout << stored_letter_2;
    }
    else {
        std::cout << stored_number_2;
    }

    std::cout << "\n";
    return 0;
}