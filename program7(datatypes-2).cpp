#include<stdio.h>
int main()
{
	float a = 3.111111111111111111;
	double b = 2.09876543298800;
	long double c = 1.998765434560;
	
	printf("%d\n ", sizeof(float));
    printf("%d\n ", sizeof(double));
	printf("%d\n ", sizeof(long double));
	printf("%.16f\n",a);
	printf("%.16f\n",b);
	printf("%.9f\n",c);	
}
