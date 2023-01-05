#include<stdio.h>

int board[10][10];
void step(int col, int row, int s) {
    if(col < 0 || row < 0 || col >= 8 || row >= 8) return; // tidak boleh keluar papan
    if(s >= board[col][row]) return; // tidak boleh baik ke step sebelumnya
    board[col][row] = s;
    step(col+1, row-2, s+1); // 1
    step(col+2, row-1, s+1); // 2
    step(col+2, row+1, s+1); // 3
    step(col+1, row+2, s+1); // 4
    step(col-1, row+2, s+1); // 5
    step(col-2, row+1, s+1); // 6
    step(col-2, row-1, s+1); // 7
    step(col-1, row-2, s+1); // 8
}

int main () {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            board[i][j] = 64;
        }
    }
    step(1, 1, 0);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if(j > 0) printf("|");
            printf("%2d", board[i][j]);
        }
        printf("\n");
    }
    return 0;
}