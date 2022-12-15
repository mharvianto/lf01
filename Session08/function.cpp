#include<stdio.h>

int sum(int a, int b) {
    return a + b;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf(" %d", arr[i]);
        // if(i >= 10000) {
        //     return;
        // }
    }
    printf("\n");
}

int max(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// passing by value
void f1(int a) {
    a += 10;
    printf("f1: %d\n", a);
}

// passing by reference/address
// pointer atau array
void f2(int arr[]) {
    arr[0] += 10;
    printf("f2: %d\n", arr[0]);
}

void f3(int *p) {
    *p += 10;
}

// recursive
//     1 2 3 4 5 6
// 0 1 1 2 3 5 8 13 21 34 55 89
// f(n) = f(n-1) + f(n-2)

long long int fibo(int n) {
    if(n <= 1) return 1;
    else return fibo(n-1) + fibo(n-2);
}

void loop(int n) {
    if(n == 0) return;
    else {
        printf("Before: %d\n", n);
        loop(n-1);
        printf("After: %d\n", n);
    }
}
/*
acgt
a
ac
acg
acgt
c
cg
cgt
g
gt
t
*/

int main() {
    // int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // printf("%d\n", sum(5, 3));
    // printArray(arr, 5);
    // printf("Max: %d\n", max(arr, 10));
    // int a = 5;
    // f1(a);
    // printf("main1: %d\n", a);
    // f2(arr);
    // printf("main2: %d\n", arr[0]);

    // int *p = &a;
    // a += 7;
    // printf("*p: %d\n", *p);
    // printf("a: %d\n", a);
    // printf("p: %p\n", p);
    // printf("&a: %p\n", &a);
    
    printf("%d\n", fibo(40));
    loop(5);
    return 0;
}