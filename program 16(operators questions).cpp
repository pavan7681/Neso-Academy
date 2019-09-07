#include<stdio.h>
int main()
{
	int i = 5;
	int var = sizeof(i++);//becacuse in unary operator expresion will not be evaluated
	printf("%d %d",i,var);
	// question 2
	int a = 1;
	int b = 1;
	int c = ++a || b++;
	int d = b-- && --a;
	
	printf("%d %d %d %d",d,c,b,a);
	return 0;
}
