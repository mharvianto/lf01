#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f = fopen("data.csv", "r");
    char nim[15];
    char nama[100];
    int nilai;
    while(feof(f) == 0) {
        fscanf(f, "%[^,],%[^,],%d", nim, nama, &nilai); fgetc(f);
        if (nim[0] == '\0') { // strcmp(nim, "") == 0
            break;
        }
        printf("Nim: %s\n"
            "Nama: %s\n"
            "Nilai: %d\n",
            nim, nama, nilai);
        nim[0] = '\0';
        // strcpy(nim, "");
    }
    return 0;
}