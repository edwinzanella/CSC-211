#include <iostream>
#include <vector>
#include <cmath>

void color_counter(std::vector<char> colorvec, int neighbors_used){
    int red_counter = 0, blue_counter = 0;

    for (int i = 0; i < neighbors_used; i++) {
        if (colorvec[i] == 'R') {
            red_counter++;
        }
        else {
            blue_counter++;
        }
    }

    if (red_counter > blue_counter) {
        std::cout << 'R' << std::endl;
    }
    else {
        std::cout << 'B' << std::endl;
    }
}

void sorting(std::vector<float> &euclidean_distances, std::vector<char> &colorvec){
    for (int i = 0; i < euclidean_distances.size(); i++) {
        for (int j = 0; j < euclidean_distances.size() - 1; j++) {
            if (euclidean_distances[j] > euclidean_distances[j + 1]) {
                std::swap(euclidean_distances[j], euclidean_distances[j + 1]);
                std::swap(colorvec[j], colorvec[j + 1]);
            }
        }
    }
}

void distances(std::vector<float> xvec, std::vector<float> yvec, std::vector<float> &euclidean_distances){
    float originalx, originaly;
    std::cin >> originalx >> originaly;

    for (int i = 0; i < xvec.size(); i++) {
        float temp;
        temp = sqrt(pow(originalx - xvec[i], 2) + pow(originaly - yvec[i], 2));
        euclidean_distances.push_back(temp);
    }
}

void get_points(std::vector<float> &xvec, std::vector<float> &yvec, std::vector<char> &colorvec, int &neighbors_used){
    int total_points;
    std::cin >> total_points >> neighbors_used;

    for (int i = 0; i < total_points; i++) {
        float tempx;
        float tempy;
        char tempcolor;
        std::cin >> tempx;
        std::cin >> tempy;
        std::cin >> tempcolor;
        xvec.push_back(tempx);
        yvec.push_back(tempy);
        colorvec.push_back(tempcolor);
    }
}

int main(){
    std::vector<float> xvec;
    std::vector<float> yvec;
    std::vector<char> colorvec;
    std::vector<float> euclidean_distances;
    int neighbors_used;

    get_points(xvec, yvec, colorvec, neighbors_used);
    distances(xvec, yvec, euclidean_distances);
    sorting(euclidean_distances, colorvec);
    color_counter(colorvec, neighbors_used);
}