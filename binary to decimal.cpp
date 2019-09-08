#include<stdio.h>
int main()
{
	int r,n,i,count = 0,sum ,sum1 = 0;
	printf("enter the number:");
	scanf("%d",&n);
	while (n != 0) {
	      r = n % 10;
	      sum = 1;
	      for ( i = 0;i < count;i++) {
	      	   sum = sum * 2;
	      }
		  sum = r * sum;
		  count = count + 1;
		  sum1 =  sum1 + sum;
	      n = n / 10;
	}
	printf("\n%d",sum1);
}
