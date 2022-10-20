#include<stdio.h>

int main() {
    /*
    1. for
    for(inisialisasi; condition; statement/increment)

    2. do-while
    do {
        statement;
    } while (condition);

    3. while
    inisialisasi;
    while (condition) {
        statement;
        increment/statement;
    }
    */
    int n;
    scanf("%d", &n);
    // if(n < 1) {
    //     printf("Salah\n");
    // } else {
        for (int i = 1; i <= n; i++) {
            printf("loop %d\n", i*i);
        }
        int j = 1;
        while (j <= n) {
            printf("while %d\n", j * j * j);
            j++;
        }
        int k = 1;
        do {
            printf("do-while %d\n", k * 3);
            k++;
        } while(k <= n);
    // }
    return 0;
}