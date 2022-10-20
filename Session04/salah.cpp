#include <stdio.h>

int main()
{
    // int plat;
    // scanf("%d", &plat);
    // if (plat % 2 == 0) {
    //     printf("Genap\n");
    // } else {
    //     printf("Ganjil\n");
    // }

    /*
    A 85-100    85 <= x <= 100 --> 85 <= x && x <= 100
    B 75-84
    C 65-74
    D 50-64
    E 0-50
    */
    int score;
    scanf("%d", &score);
    if (50 <= score) {
        printf("D");
    } else if (65 <= score) {
        printf("C");
    } else if (75 <= score) {
        printf("B");
    } else if (85 <= score) {
        printf("A");
    } else {
        printf("E");
    }
    printf("\n");
    return 0;
}