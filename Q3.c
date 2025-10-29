#include<stdio.h>

int main() {
    int image[4][4] = {
            {1, 0, 1, 0},
            {0, 1, 0, 1},
            {1, 1, 0, 0},
            {0, 0, 1, 1}
        };

    int i,j,k,count=0;
    for(i=0;i<4;i++){
        for(j=0;j<4;j++) {
            if(image[i][j] == 0) {
                printf(" ");
            }
            else {
                printf("#");
                count++;
            }
        }
        for(k=0;k<4;k++) {
            if(image[i][k] == 1) {
                printf(" ");
            }
            else printf("#");
        }
        printf("\n");
    }
    printf("White pixels in original image: %d", count);
}