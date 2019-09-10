#include<stdio.h>
//int sum(int);
int main()
{
	int sum = 0,i,n;
printf("enter the range:");
scanf("%d",&n);
for (i = 1;i <= n;i++) {
	sum = sum + i;
}	
printf("\n%d",sum);

}
