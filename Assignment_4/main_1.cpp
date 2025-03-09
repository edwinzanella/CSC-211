#include <iostream>
#include <vector>

void print(bool solved) {
    if (solved == true) {
        std::cout << "Solution is good!" << std::endl;
    }
    else {
        std::cout << "Wrong solution!" << std::endl;
    }

    return;
}

bool threebythree(std::vector< std::vector<int> > v1, bool solved) {
    if (solved == false) {
        return false;
    }
    else {
        for (int i = 0; i < v1.size(); i ++) {
            for (int j = 0; j < v1[i].size(); j++) {
                if (i % 3 == 0 && j % 3 == 0) {
                    for (int k = 0; k < v1.size() / 3; k++) {
                        for (int l = 0; l < v1[i].size() / 3; l++) {
                            for (int m = 0; m < v1[i].size() / 3; m++) {
                                if (v1[i + k][j + l] == v1[i + l][j + m] && l != m) {
                                    return false;
                                }
                            }
                        }
                    }
                }
            }
        }
        return true;
    }
}

bool rows_and_columns(std::vector< std::vector<int> > v1){
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v1[i].size(); j++) {
            for (int k = 0; k < v1[i].size(); k++) {
                if (j != k) {
                    // rows
                    if (v1[i][j] == v1[i][k]) {
                        return false;
                    }
                    // columns
                    if (v1[j][i] == v1[k][i]) {
                        return false;
                    }
                }
            }
        }
    }

    return true;
}

void store_board(std::vector< std::vector<int> > &v1){
    int n;

    for (int i = 0; i < 9; i++) {
        std::vector<int> temp;

        for (int j = 0; j < 9; j++) {
            std::cin >> n;
            temp.push_back(n);
        }
        v1.push_back(temp);
    }

    return;
}

int main(){
    std::vector< std::vector<int> > v1;
    bool solved = true;
    store_board(v1);
    solved = rows_and_columns(v1);
    solved = threebythree(v1, solved);
    print(solved);
    return 0;
}