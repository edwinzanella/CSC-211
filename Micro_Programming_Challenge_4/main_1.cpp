#include <iostream>
#include <iomanip>

int main(){
    int test_cases, class_size;
    std::cin >> test_cases;
    double average[test_cases], above_average[test_cases];

    for (int i = 0; i < test_cases; i++) {
        std::cin >> class_size;
        double student[class_size];
        average[i] = 0;
        above_average[i] = 0;
        int temp = 0;
        int temp2 = 0;

        for (int j = 0; j < class_size; j++) {
            std::cin >> student[j];
            temp += student[j];
        }  

        average[i] = temp;
        average[i] /= class_size;

        for (int j = 0; j < class_size; j++) {
            if (student[j] > average[i]) {
                temp2++;
            }
        }

        double temp2_double = temp2;
        double class_size_double = class_size;
        above_average[i] = (temp2_double / class_size_double) * 100;
    }

    for (int i = 0; i < test_cases; i++) {
        std::cout << std::setprecision(3) << std::fixed << above_average[i] << "%" << std::endl;
    }

    return 0;
}