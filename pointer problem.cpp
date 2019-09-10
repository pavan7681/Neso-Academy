//program to find min and max elements in array using pointers.
#include<stdio.h>
void minmaxofarray(int a[],int length,int *min,int *max) {
	*min = *max = a[0];
	int i;
	for (i = 0;i < length;i++) {
		if (a[i] > *max)
		*max = a[i];
		if (a[i] < *min)
		*min = a[i];
	}
	
}
int main() {
	int a[] = {2,3,4,5,6,7,8,9,1,0,6,7,89};
	int length = sizeof(a)/sizeof(a[0]);
	int min,max;
	minmaxofarray(a,length,&min,&max);
	printf("the min element is: %d,max element is: %d",min,max);
}
