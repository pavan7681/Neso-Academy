#include<stdio.h>
#include<limits.h>
int main()
{
	int var1 = INT_MIN;
	int var2 = INT_MAX;
	int a;
	printf("size of integer : %d",sizeof(a));
	
	printf("range of signed integer is from : %d to %d" ,var1,var2);
	return 0;
}
