#include "sudoku.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
using namespace std;

Sudoku::Sudoku(const char *fname) {
    ifstream infile;
    string line, number;
    int i = 0;
    infile.open(fname);


    while(getline(infile, line)) {
        stringstream parser(line);
        while(getline(parser, number, ',')) {
            puzzle[i++] = stoi(number);
        }
    }
    infile.close();
}

Sudoku::~Sudoku() {

}

void Sudoku::solve() {
    for (int row = 0; row < 9; row++) {
        for (int col = 0; col < 9; col++) {
            int index = row * 9 + col;
            if (puzzle[index] == 0) {
                std::vector<int> possible;
                possible = {1, 2, 3, 4, 5, 6, 7, 8, 9};
                for (int i = 0; i < 9; i++) {

                }
                
                puzzle[index] = 1;
                Sudoku::solve();
            }
        }
    }
}

void Sudoku::print() {
    for(int i = 0; i < 9; i++) {
        std::cout << puzzle[i*9];
        int base = i*9;
        for(int offset = 1; offset < 9; offset++) {
            std::cout << ',' << puzzle[base + offset];
        }
        std::cout << std::endl;
    }
}
