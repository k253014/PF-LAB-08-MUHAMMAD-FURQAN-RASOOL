#include<stdio.h>

int main () {
    int n=5, i ,j;
    
    for(i=1;i<=n;i++) {
        for(j=1;j<=n - i + 1;j++) {
            printf(" ");
        }
        for(j =1;j<= i;j++) {
            printf("* ");
        }
        for(j=1;j<=n - i + 1;j++) {
            printf(" ");
        }
        printf(" | ");
        for(j=1;j<=n - i + 1;j++) {
            printf(" ");
        }
        for(j =1;j<= i;j++) {
            printf("%d ",i);
        }
        for(j=1;j<=n - i + 1;j++) {
            printf(" ");
        }
        printf(" | ");
        for(j=1;j<=n - i + 1;j++) {
            printf(" ");
        }
        for(j =1;j<= i;j++) {
            printf("%c ", (char)(64 + j));
        }

        printf("\n");

    }

}