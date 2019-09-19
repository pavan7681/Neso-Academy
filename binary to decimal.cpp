#include<stdio.h>
int main()
{
	int i = 1,n,rem,decimal = 0;
	printf("enter the binary number :");
	scanf("%d",&n);
	while (n != 0) {
		rem = n % 10;
		decimal = decimal + rem * i;
		n = n / 10;
		i = i * 2;
	}
	printf("%d",decimal);
	
}
