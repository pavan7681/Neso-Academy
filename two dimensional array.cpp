#include<stdio.h>
int main()
{
	int rows,cols,i,j;
	printf("enter the rows and cols:");
	scanf("%d %d",&rows,&cols);
	int a[rows][cols];
	for (i = 0;i < rows;i++) {
		for (j = 0;j < cols;j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for (i = 0;i < rows;i++) {
		for (j = 0;j < cols;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
