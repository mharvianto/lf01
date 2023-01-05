#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Mhs {
    int score;
    char name[100];
    int rank;
};

void swap(Mhs *a, Mhs *b) {
    Mhs t = *a;
    *a = *b;
    *b = t;
} 

void sort(Mhs arr[1005], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j].score < arr[j+1].score){
                swap(&arr[j], &arr[j+1]);
            } else if(arr[j].score == arr[j+1].score && strcmp(arr[j].name, arr[j+1].name) > 0) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    FILE *f = fopen("input.txt", "r");
    int n;
    Mhs arr[1005];
    fscanf(f, "%d", &n); fgetc(f);
    for (int i = 0; i < n; i++) {
        fscanf(f, "%d %[^\n]", &arr[i].score, arr[i].name);
        arr[i].rank = 1;
    }
    sort(arr, n);
    for (int i = 1; i < n; i++) {
        if (arr[i].score == arr[i-1].score) {
            arr[i].rank = arr[i-1].rank;
        } else {
            arr[i].rank = i + 1;
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d %d %s\n", arr[i].rank, arr[i].score, arr[i].name);
    }
    
    return 0;
}