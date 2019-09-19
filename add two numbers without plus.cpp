#include<stdio.h>
int main()
{
	int a,b;
	printf("enter a and b values:");
	scanf("%d %d",&a,&b);
	while (b != 0) {
		a++;
		b--;
	}
	printf("%d",a);
}
