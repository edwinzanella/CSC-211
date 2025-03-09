#include <iostream>

int main(){
    long int n, k, done;
    std::cin >> n >> k;
    done = n;
    
    for (int i = 0; i < k - 1; i++) {
        done *= n;
    }

    std::cout << done << std::endl;
    return 0;

}