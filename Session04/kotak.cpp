#include<stdio.h>
/*

input:
5 3
output:
#####
#   #
#####

input:
4 6
output:
####
#  #
#  #
#  #
#  #
####

#
##
###
####

#
##
#_#
####

__#
_###
#####

*/
int main() {
    int l, p;
    scanf("%d %d", &l, &p);
    for (int i = 1; i <= p; i++) {
        for (int j = 1; j <= l; j++) {
            if(i == 1 || j == 1 || i == p || j == l) {
                printf("#");
            } else {
                printf("_");
            }
        }
        printf("\n");
    }
    return 0;
}