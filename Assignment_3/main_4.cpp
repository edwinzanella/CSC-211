#include <iostream>

void print (bool is_sorted){
    if (is_sorted == true) {
        std::cout << "Sorted" << std::endl;
    }
    else {
        std::cout << "Not Sorted" << std::endl;
    }

    return;
}

bool sorted (){
    int n, i = 0, arr[100];
    while (std::cin >> n) {
        arr[i] = n;
        i++;
    }

    for (int j = 0; j < i - 1; j++) {
        if (arr[j] < arr[j + 1]) {
            return false;
        }
    }

    return true;
}

int main(){
    bool is_sorted = sorted();
    print(is_sorted);
    return 0;
}