#include <iostream>
#include <cmath>

int diameter(){
    int n;
    int arr[1000];
    int counter = 0;
    int dia = 0;

    while (std::cin >> n) {
        arr[counter] = n;
        counter++;
    }

    for (int i = 0; i < counter; i += 2) {
        int x1 = arr[i];
        int y1 = arr[i + 1];
        for (int j = 0; j < counter; j += 2) {
            int x2 = arr[j];
            int y2 = arr[j + 1];
            int formula = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
            if (formula > dia) {
                dia = formula;
            }
        }
    }

    return dia;
}

int main(){
    int dia = diameter();
    std::cout << dia << std::endl;
    return 0;
}