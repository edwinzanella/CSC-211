#include "sudoku.h"

int main(int argc, char *argv[]) {
    char *fname = argv[1];
    Sudoku mySudoku(fname);
    mySudoku.solve();
    mySudoku.print();
    return 0;
}
