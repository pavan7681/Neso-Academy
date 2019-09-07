#include<stdio.h>
int main()
{
	int n;
	printf("enter a number\n");
	scanf("%d",&n);
	
	while (n != 0) {
		if (n < 0)
		    break;
		printf(" enter a number\n");
		scanf("%d",&n);
	}
}
