#include "cellgrid.h"
#include <iostream>
#include <fstream>

Cellgrid::Cellgrid(const char *fname, int m, int n) {
    rows = m;
    cols = n;

    grid = new bool[rows*cols];

    std::ifstream infile; 

    infile.open(fname);

    for(int i = 0; i < rows; i++) {
        int base = i * cols;
        for(int offset = 0; offset < cols; offset++) {
            infile >> grid[base + offset];
        }
    }

    infile.close();
}

Cellgrid::~Cellgrid() {
    
}

int Cellgrid::countCells(int row, int col, int conn) {
    int index = (row - 1) * cols + (col - 1);

    if (row < 0 || row > rows || col < 0 || col > cols || grid[index] == 0) {
        return 0;
    }

    grid[index] = 0;
    int counter = 1;

    if (conn == 4) {
        counter += Cellgrid::countCells(row - 1, col, conn);
        counter += Cellgrid::countCells(row + 1, col, conn);
        counter += Cellgrid::countCells(row, col - 1, conn);
        counter += Cellgrid::countCells(row, col + 1, conn);
    }
    else if (conn == 8) {
        counter += Cellgrid::countCells(row - 1, col, conn);
        counter += Cellgrid::countCells(row + 1, col, conn);
        counter += Cellgrid::countCells(row, col - 1, conn);
        counter += Cellgrid::countCells(row, col + 1, conn);
        counter += Cellgrid::countCells(row - 1, col - 1, conn);
        counter += Cellgrid::countCells(row + 1, col - 1, conn);
        counter += Cellgrid::countCells(row - 1, col + 1, conn);
        counter += Cellgrid::countCells(row + 1, col + 1, conn);
    }

    return counter;
}

int Cellgrid::countBlobs(int conn) {
    int total_blobs = 0;
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < cols; col++) {
            int index = row * cols + col;
            if (grid[index] == 1) {
                total_blobs++;
                Cellgrid::countCells(row + 1, col + 1, conn);
            }
        }
    }

    return total_blobs;
}

void Cellgrid::print() {
    for(int i = 0; i < rows; i++) {
        int base = i * cols;
        std::cout << grid[base];
        for(int offset = 1; offset < cols; offset++) {
            std::cout << ' ' << grid[base + offset];
        }
        std::cout << std::endl;
    }
}