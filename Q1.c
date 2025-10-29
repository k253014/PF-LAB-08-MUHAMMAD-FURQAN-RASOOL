#include<stdio.h>
int main() {
    int marks[3][4] = {
        {85,92,78,90},
        {88,76,95,84},
        {90,85,88,92}
    };
    int i,j;
    for(i=0;i<3;i++) {
        printf("Class %d average: ", i+1);
        float average;
        for(j=0;j<4;j++) {
            average += marks[i][j];
        }
        average /= 4;
        printf("%.2f\n", average);
    }
}