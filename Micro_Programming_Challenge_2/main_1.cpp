#include <iostream>
#include <iomanip>
#include <cmath>

int main(){

    double x1, y1, x2, y2, length1, length2, normalizedx1, normalizedx2, normalizedy1, normalizedy2, dotproduct;
    std::cin >> x1 >> y1 >> x2 >> y2;

    length1 = sqrt(x1 * x1 + y1 * y1);
    length2 = sqrt(x2 * x2 + y2 * y2);

    normalizedx1 = x1 / length1;
    normalizedy1 = y1 / length1;
    normalizedx2 = x2 / length2;
    normalizedy2 = y2 / length2;

    dotproduct = normalizedx1 * normalizedx2 + normalizedy1 * normalizedy2;

    std::cout << std::setprecision(4) << std::fixed << "Length of v1: " << length1 << std::endl;
    std::cout << std::setprecision(4) << std::fixed << "Length of v2: " << length2 << std::endl;

    if (dotproduct > 0) {

        std::cout << std::setprecision(4) << std::fixed << "Their normalized dot product is " << dotproduct << " and they are Acute" << std::endl;

    }

    else if (dotproduct < 0) {

        std::cout << std::setprecision(4) << std::fixed << "Their normalized dot product is " << dotproduct << " and they are Obtuse" << std::endl;

    }

    else {

        std::cout << std::setprecision(4) << std::fixed << "Their normalized dot product is " << dotproduct << " and they are Perpendicular" << std::endl;

    }

    return 0;

}