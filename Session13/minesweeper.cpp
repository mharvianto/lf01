#include<stdio.h>
#include<stdlib.h>

void printBoard(char board[15][15], int layer[15][15]){
    printf("  ");
    for (int i = 0; i < 10; i++) {
        printf("%d", i);
    }
    printf("\n\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            if(layer[i][j] == 1) {
                printf("%c", board[i][j]);
            } else {
                printf("-");
            }
        }
        printf("\n");
    }
}

void calcBomb(char board[15][15]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (board[i][j] != '*') {
                int count = 0;
                for (int k = (i-1 < 0 ? 0 : i-1); k <= (i+1 > 9 ? 9 : i+1); k++) {
                    for (int l = (j-1 < 0 ? 0 : j-1); l <= (j+1 > 9 ? 9 : j+1); l++) {
                        if (board[k][l] == '*') {
                            count++;
                        }
                    }
                }
                if (count > 0) {
                    board[i][j] = ('0' + count);
                }
            }
        }
    }
}

void floodfill(char board[15][15], int layer[15][15], int x, int y) {
    if (x < 0 || y < 0 || x > 9 || y > 9) return;
    if (layer[y][x] == 1) return;
    layer[y][x] = 1;
    if (board[y][x] == ' ') {
        floodfill(board, layer, x+1, y+1);
        floodfill(board, layer, x+1, y-1);
        floodfill(board, layer, x, y+1);
        floodfill(board, layer, x, y-1);
        floodfill(board, layer, x+1, y);
        floodfill(board, layer, x-1, y);
        floodfill(board, layer, x-1, y+1);
        floodfill(board, layer, x-1, y-1);
    }
}

int main(){
    char board[15][15] = {};
    int layer[15][15] = {};
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            board[i][j] = ' ';
        }
    }
    
    for (int i = 0; i < 10; i++) {
        int col = rand() % 10, row = rand() % 10;
        if(board[col][row] == '*') {
            i--;
        } else {
            board[col][row] = '*';
        }
    }
    calcBomb(board);
    int x, y;
    do{
        printBoard(board, layer);
        scanf("%d %d", &x, &y);
        floodfill(board, layer, x, y);
    }while(1);
    return 0;
}