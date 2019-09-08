#include<stdio.h>
int main()
{
	int i;
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	for (i = 0;i < 10;i++) {
		printf("%d ",a[i]);
	}
	int b[100],n;
	printf("enter the number of values :");
	scanf("%d",&n);
	for (i = 0;i < n;i++) {
		scanf("%d ",&b[i]);
	}
	for (i = 0;i < n;i++) {
		printf("%d ",b[i]);
	}
}
