#include<stdio.h>
#include<string.h>

int search(char kata[], char text[]) {
    int l = strlen(kata), k = strlen(text);
    for (int i = 0; i < l - k; i++) {
        int n=0;
        for (int j = 0; j < k; j++) {
            if(kata[i+j] == text[j]) {
                n++;
            } else {
                break;
            }
        }
        if(n == k){
            return 1;
        }
    }
    return 0;
}

int main(){
    //strncpy
    char kata[] = "Binus University";
    char temp[100];
    strncpy(temp, kata, 10);
    printf("%s\n", temp);
    strncpy(temp, &kata[2], 10);
    printf("%s\n", temp);
    char substring[] = "univ";

    char * t = strstr(kata, substring);
    printf("strstr: %s\n", t);
    int r = search(kata, substring);
    printf("manual: %d\n", r);
    return 0;
}