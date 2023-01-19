#include<stdio.h>
#include<string.h>

struct Data {
    int score;
    char name[100];
};

void bubble(Data arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if(strcmp(arr[j].name, arr[j+1].name) > 0) {
                Data t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        }
    }
}

int binarySearch(Data arr[], int n, char name[]) {
    int l = 0, h = n-1, m;
    while (l <= h) {
        m = (l + h) / 2;
        int cmp = strcmp(name, arr[m].name);
        if (cmp == 0) {
            return m;
        } else if (cmp < 0) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}

int main(){
    Data arr[1005];
    int n;
    scanf("%d", &n); getchar();
    for (int i = 0; i < n; i++) {
        scanf("%d %[^\n]", &arr[i].score, arr[i].name); getchar();
    }
    bubble(arr, n);
    // for (int i = 0; i < 100; i++) {
    //     printf("%s\n", arr[i].name);
    // }
    int q;
    char name[100];
    scanf("%d", &q); getchar();
    for (int i = 0; i < q; i++) {
        scanf("%[^\n]", name); getchar();
        int index = binarySearch(arr, n, name);
        if(index == -1) {
            printf("Not Found\n");
        } else {
            printf("%d\n", arr[index].score);
        }
    }
    return 0;
}