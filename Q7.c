#include<stdio.h>

int main () {
    int n=5, i ,j;
    
    for(i=1;i<=2*n;i+=2) {
        for(j=1;j<=2*n - i;j++) {
            printf(" ");
        }
        for(j =1;j<= i;j++) {
            printf("* ");
        }
        for(j=1;j<=2*n - i + 1;j++) {
            printf(" ");
        }
        printf(" | ");
        for(j=1;j<=2*n - i + 1;j++) {
            printf(" ");
        }
        for(j =1;j<= i;j++) {
            printf("%d ",j);
        }
        for(j=1;j<=2*n - i + 1;j++) {
            printf(" ");
        }
        printf(" | ");
        for(j=1;j<=2*n - i + 1;j++) {
            printf(" ");
        }
        for(j =1;j<= i;j++) {
            printf("%c ", (char)(64 + j));
        }

        printf("\n");

    }

}