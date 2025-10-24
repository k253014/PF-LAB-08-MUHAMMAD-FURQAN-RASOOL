#include<stdio.h>

int main () {
	int matrix[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	int i,j,max=matrix[0][0];
	int index_i,index_j;
	
	for(i =0;i<3;i++) {
		for(j=0;j<4;j++) {
			if(matrix[i][j] > max) {
				
			max = matrix[i][j];
			index_i = i;
			index_j = j;
			}
		}
	}
	
	printf("The max number is %d at matrix[%d][%d]", max,index_i,index_j);
}
