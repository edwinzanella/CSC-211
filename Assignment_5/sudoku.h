#ifndef _SUDOKU_H_
#define _SUDOKU_H_

class Sudoku {
    private:
        int puzzle[81];
    public:
        Sudoku(const char *fname);
        ~Sudoku();
        void solve();
        void print();
};
#endif
