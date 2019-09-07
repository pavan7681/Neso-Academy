#include<stdio.h>
int main()
{
	int i = 1;
	do 	{
		printf("%d",i);//even the condition is false it is executed one time.
		
	}while (i < 1 );
	printf("\n");
// program which allows the user to enter an integer until the user enters 0.	
	int n;
	do {
		printf(" enter an integer :");
		scanf("%d",&n);
	} while (n != 0);
	
	printf("you are out of the loop");
}
