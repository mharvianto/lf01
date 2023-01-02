#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int min = i;
        for (int j = min + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
    }
}

int main() {
    // srand(time(0));
    int arr[105];
    for (int i = 0; i < 100; i++) {
        arr[i] = (rand() % 100) + 1; // 1 - 100
        printf("%d ", arr[i]);
    }
    printf("\n");
    selectionSort(arr, 100);
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}