#ifndef _CELLGRID_H_
#define _CELLGRID_H_

class Cellgrid {
    private:
        int rows, cols;
        bool *grid;

    public:
        Cellgrid(const char *fname, int m, int n);
        ~Cellgrid();
        int countCells(int row, int col, int conn);
        int countBlobs(int conn);
        void print();
};
#endif
