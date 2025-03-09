#include <iostream>

int main() {
    int x, y, moves;
    std::cin >> x >> y;

    while (std::cin >> moves) {
        switch (moves) {
            case 0:
                x += 2;
                y += 1;
                break;

            case 1:
                x += 2;
                y -= 1;
                break;

            case 2:
                x += 1;
                y -= 2;
                break;

            case 3:
                x -= 1;
                y -= 2;
                break;

            case 4:
                x -= 2;
                y -= 1;
                break;

            case 5:
                x -= 2;
                y += 1;
                break;

            case 6:
                x -= 1;
                y += 2;
                break;

            case 7:
                x += 1;
                y += 2;
                break;
        }

        if (x < 1 || x > 8 || y < 1 || y > 8) {
            std::cout << "Invalid sequence" << std::endl;
            break;
        }
    }

    if (x >= 1 && x <= 8 && y >= 1 && y <= 8) {
        std::cout << x << " " << y << std::endl;
    }

    return 0;
}