#include<stdio.h>
#include<stdlib.h>

int arr[100000000] = {};  

int main() {
    for (int i = 0; i < 100000000; i++) {
        arr[i] = i;
    }
    
    int* p = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p[i] = i;
    }
    int* p1 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p1[i] = i;
    }
    int* p2 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p2[i] = i;
    }
    int* p3 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p3[i] = i;
    }
    int* p4 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p4[i] = i;
    }
    int* p5 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p5[i] = i;
    }
    int* p6 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p6[i] = i;
    }
    int* p7 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p7[i] = i;
    }
    int* p8 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p8[i] = i;
    }
    int* p9 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p9[i] = i;
    }
    int* p10 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p10[i] = i;
    }
    int* p11 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p11[i] = i;
    }
    int* p12 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p12[i] = i;
    }
    int* p13 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p13[i] = i;
    }
    int* p14 = (int*)malloc(4 * 500000000);
    for (int i = 0; i < 500000000; i++) {
        p14[i] = i;
    }
    printf("%d\n", p[0]);
    printf("%d\n", sizeof(arr));
    getchar();
    p3 = (int*)realloc(p3, 1000000000);
    getchar();
    free(p);
    getchar();
    free(p1);
    getchar();
    free(p2);
    getchar();
    free(p3);
    getchar();
    return 0;
}