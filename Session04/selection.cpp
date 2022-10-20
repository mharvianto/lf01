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
    // int score;
    // scanf("%d", &score);
    // if (85 <= score) {
    //     printf("A");
    // } else if (75 <= score) {
    //     printf("B");
    // } else if (65 <= score) {
    //     printf("C");
    // } else if (50 <= score) {
    //     printf("D");
    // } else {
    //     printf("E");
    // }
    // printf("\n");
    
    char input;
    scanf("%c", &input);
    switch (input) {
        case 'Y':
            printf("Yes\n");
            break;
        case 'y':
            printf("Yes\n");
            break;
        case 'N':
        case 'n': printf("No"); break;
        default:
        break;
    }
    // switch(score) {
    //     case 100:
    //     case 99:
    //     case 98:
    //     case 97:
    //     case 96:
    //     case 95:
    //     case 94:
    //     case 93:
    //     case 92:printf("A");
    // }
    return 0;
}