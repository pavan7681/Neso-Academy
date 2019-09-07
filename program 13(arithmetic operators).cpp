#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b numbers:");
	scanf("%d %d",&a,&b);
	printf("sum of %d and %d is : %d",a,b,a + b);
	printf("sub of %d and %d is : %d",a,b,a - b);
	printf("mul of %d and %d is : %d",a,b,a * b);
	printf("div of %d and %d is : %d",a,b,a / b);
	printf("rem of %d and %d is : %d",a,b,a % b);
	return 0;
}
