#include <iostream>

int main(){
    int num;
    std::cin >> num;
    int inputs[num];
    for (int i = 0; i < num; i++) {
        std::cin >> inputs[i];
    }
    int counter = 0;
    int smallest = inputs[0];

    for (int i = 0; i < num; i++) {
        if (inputs[i] < smallest) {
            smallest = inputs[i];
            counter = i;
        }
    }

    std::cout << counter << std::endl;
    return 0;
}