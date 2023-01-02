#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1-i; j++) {
            if (arr[j+1] < arr[j]) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    // srand(time(0));
    int arr[100005];
    for (int i = 0; i < 100000; i++) {
        arr[i] = (rand() % 1000) + 1; // 1 - 100
        // printf("%d ", arr[i]);
    }
    // printf("\n");
    bubbleSort(arr, 100000);
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}