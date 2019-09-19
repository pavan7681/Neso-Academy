#include<stdio.h>
int main()
{
	int n,i,power = 1;
	double power1 = 1.0;
	printf("enter the base and power:");
	scanf("%d %d",&n,&i);
	if (i > 0) {
		while (i != 0) {
			power = power * n;
			i--;
		}
		printf("%d",power);
	}
	else {
			while (i != 0) {
			power1 = power1 * (1.0/n);
			i++;
	    	}
     	printf("%f",power1);
    }
}
