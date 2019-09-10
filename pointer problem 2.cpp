#include<stdio.h>
int func(int,int);
int main()
{   
    int *mid;
	int a[] = {1,2,3,4,5};
	int n = sizeof(a)/sizeof(a[0]);
	*mid = func(a,n);
	printf("\n%d",*mid);
}
int *func(int a[],int n) {
	return &(a[n/2]);
}
