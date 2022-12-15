#include<stdio.h>
#include<stdlib.h>

int main(){
    // r w a 
    FILE *f = fopen("data.txt", "w");
    fprintf(f, "Hello World!!\n");
    char nama[100];
    scanf("%[^\n]", nama);
    fprintf(f, "Nama: %s\n", nama);
    return 0;
}