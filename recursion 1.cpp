#include<stdio.h>
int checkprime(int);
int main() {
	int n1,n2,i,count;
	printf("enter the intervals:");
	scanf("%d %d",&n1,&n2);
	for (i = n1 + 1;i < n2;i++) {
		
		count = checkprime(i);
		if (count == 1) {
			printf("%d ",i);
		}
	}
	
	
}
int checkprime(int i) {
	int flag = 1,j;
	for (j = 2;j < i;j++) {
		if (i % j == 0) {
			flag = 0;
			break;
		}
	}
	return flag;
}
