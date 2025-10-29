#include<stdio.h>

int main() {
    int i,j;
    printf("O: Empty seats, X: Filled Seat\n");
    for(i=0;i<5;i++) {
        for(j=0;j<5;j++) {
            if((i+j)%2) {
                printf("X ");
            } else printf("O ");
        }
        printf("\n");
    }


}