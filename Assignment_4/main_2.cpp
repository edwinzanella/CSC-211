#include <iostream>
#include <vector>

void print(std::vector< std::vector<char> > v1){
    for (int i = 0; i < v1.size(); i++) {
        for (int j = 0; j < v1[i].size(); j++) {
            std::cout << v1[i][j];
            if (j != v1[i].size() - 1) {
                std::cout << " ";
            }
        }
        std::cout << "\n";
    }
}

void run_generations(std::vector< std::vector<char> > &v1, int generations){
    for (int repeats = 0; repeats < generations; repeats++) {
        std::vector< std::vector<char> > temp_gen;

        for (int i = 0; i < v1.size(); i++) {
            std::vector<char> temp;

            for (int j = 0; j < v1[i].size(); j++) {

                // checks the # of * around a cell space
                int alive_counter = 0;
                for (int k = 0; k < 3; k++) {
                    for (int l = 0; l < 3; l++) {
                        if (i + k - 1 >= 0 && i + k - 1 < v1.size() && j + l - 1 >= 0 && j + l - 1 < v1[i].size())
                            if (v1[i + k - 1][j + l - 1] == '*') {
                                alive_counter++;
                            }
                    }
                }
                if (v1[i][j] == '*') {
                    alive_counter--;
                }

                if (alive_counter < 2 && v1[i][j] == '*') {
                    temp.push_back('.');
                }
                else if (alive_counter > 3 && v1[i][j] == '*') {
                    temp.push_back('.');
                }
                else if (alive_counter == 2 && v1[i][j] == '*' || alive_counter == 3 && v1[i][j] == '*') {
                    temp.push_back('*');
                }
                else if (alive_counter == 3 && v1[i][j] == '.') {
                    temp.push_back('*');
                }
                else {
                    temp.push_back('.');
                }
            }
            temp_gen.push_back(temp);
        }

        v1 = temp_gen;
        temp_gen.clear();
    }
}

void create_board(std::vector< std::vector<char> > &v1, int &generations){
    int rows, columns;
    std::cin >> rows >> columns >> generations;
    char cell_space;

    for (int i = 0; i < rows; i++) {
        std::vector<char> temp;

        for (int j = 0; j < columns; j++) {
            std::cin >> cell_space;
            temp.push_back(cell_space);
        }

        v1.push_back(temp);
    }
}

int main(){
    std::vector< std::vector<char> > v1;
    int generations;
    create_board(v1, generations);
    run_generations(v1, generations);
    print(v1);
}