#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void swap(int *a, int *b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int temp[1000000];
void merge(int arr[], int l, int m, int h) {
    for (int i = l; i <= h; i++) {
        temp[i - l] = arr[i];
    }
    int i = l, j = m + 1, k = l;
    while (i <= m && j <= h) {
        if (temp[i - l] <= temp[j - l]) {
            arr[k] = temp[i - l];
            i++;
        } else {
            arr[k] = temp[j - l];
            j++;
        }
        k++;
    }
    while (i <= m) { // pindahin sisa yg sebelah kiri
        arr[k] = temp[i - l];
        i++;
        k++;
    }
    while (j <= h) { // pindahin sisa yg sebelah kanan
        arr[k] = temp[j - l];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int h) {
    if(l < h) {
        int m = (l + h) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, h);
        merge(arr, l, m, h);
    }
}

int arr[1000005];
int main() {
    // srand(time(0));
    for (int i = 0; i < 1000000; i++) {
        arr[i] = (rand() % 1000) + 1; // 1 - 100
        // printf("%d ", arr[i]);
    }
    // printf("\n");
    mergeSort(arr, 0, 999999);
    for (int i = 0; i < 100; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}