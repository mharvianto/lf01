#include<stdio.h>
#include<stdlib.h>
struct mhs {
    char nim[15];
    char nama[100];
    int score;
};
int main(){
    mhs lf01[10];
    FILE *f = fopen("data.csv", "w");
    int n;
    scanf("%d", &n); getchar();
    for (int i = 0; i < n; i++) {
        scanf("%s", lf01[i].nim); getchar();
        scanf("%[^\n]", lf01[i].nama); getchar();
        scanf("%d", &lf01[i].score); getchar();
        fprintf(f, "%s,%s,%d\n", lf01[i].nim, lf01[i].nama, lf01[i].score);
    }
    fclose(f);
    return 0;
}