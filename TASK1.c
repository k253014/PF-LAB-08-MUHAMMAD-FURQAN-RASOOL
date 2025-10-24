#include<stdio.h>

int main () {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	 for(int i=1;i<=n;i++) {
        printf("%d: ", i);
        for(int j=1;j<=10;j++) {
            int total = i * j;
            printf("%4d ", total);
        }
        printf("\n");
    }
}

