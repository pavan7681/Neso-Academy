#include<stdio.h>
int main() {
	int a[] = {1,2,3,4,5,6,7};
	int sum = 0,*p;
	for (p = &a[0];p < &a[6];p++) {
		sum += *p;
	}
	printf("\nsum is : %d",sum);
	
}
