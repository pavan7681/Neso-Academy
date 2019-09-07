#include<stdio.h>
int main()
{
	int a = 5,b = 3;
	int incr;
	incr = (a < b) && (b++);
	printf("%d\n",incr);
	printf("%d",b);//b is not incrementing due to short circuit rule in operators
	return 0;
}
