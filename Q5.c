#include<stdio.h>

int main() {
    int temp[4][4] = {
        {12, 15, 10, 2}, 
        {11, 8, 12, 13},
        {14, 13, 9, 7},
        {16, 11, 10, 8}  
        };
    int i,j;
    printf("Cold Spots At:\n");
    for(i=0;i<4;i++) {
        int index_i,index_j,current=temp[i][0];
        for(j=0;j<4;j++) {
            if(temp[i][j] < current) {
                current = temp[i][j];
                index_i = i;
                index_j= j;   
            }
        }
        for(j=0;j<4;j++) {
            if(current > temp[j][index_j]){
                break;
            }
            if((current < temp[j][index_j]) &&( j ==3)) {
                printf("At position (%d,%d) with Temperature %d.C\n", index_i+1, index_j+1, temp[index_i][index_j]);
            }
        }
    }
}
