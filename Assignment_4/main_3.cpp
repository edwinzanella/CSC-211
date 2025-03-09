#include <iostream>
#include <vector>

void print(bool answer){
    if (answer == true) {
        std::cout << "Solution is good!" << std::endl;
    }
    else {
        std::cout << "Wrong solution!" << std::endl;
    }
}

bool check_answer(std::vector< std::vector<int> > v1){
    int checker = -1;

    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v1[i].size(); j++) {
            if (v1[i][j] != 0) {
                if (checker > v1[i][j]) {
                    return false;
                }
                else {
                    checker = v1[i][j];
                }
            }
        }
    }

    if (v1[2][2] != 0) {
        return false;
    }
    
    return true;
}

void swap_elements(std::vector< std::vector<int> > &v1){
    char direction;

    next:
    while (std::cin >> direction) {
        for (int i = 0; i < v1.size(); i++) {
            for (int j = 0; j < v1[i].size(); j++) {
                if (v1[i][j] == 0) {
                    if (direction == 'D' && i < 2) {
                        std::swap(v1[i][j], v1[i + 1][j]);
                    }
                    else if (direction == 'U' && i > 0) {
                        std::swap(v1[i][j], v1[i - 1][j]);
                    }
                    else if (direction == 'L' && j > 0) {
                        std::swap(v1[i][j], v1[i][j - 1]);
                    }
                    else if (direction == 'R' && j < 2) {
                        std::swap(v1[i][j], v1[i][j + 1]);
                    }
                    
                    goto next;
                }
            }
        }
    }
}

void store_board(std::vector< std::vector<int> > &v1){
    int n;

    for (int i = 0; i < 3; i++) {
        std::vector<int> temp;

        for (int j = 0; j < 3; j++) {
            std::cin >> n;
            temp.push_back(n);
        }
        v1.push_back(temp);
    }
}

int main(){
    std::vector< std::vector<int> > v1;
    store_board(v1);
    swap_elements(v1);
    bool answer = check_answer(v1);
    print(answer);
}