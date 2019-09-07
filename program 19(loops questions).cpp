#include<stdio.h>
int main() {
	int i = 1024;
	for ( ;i;i >>= 1) {
		printf("hello,world\n");
	}
	//question 2
	int j;
	for (j = 0;j < 20;j++) {
		switch(i)
		{
			case 0: j += 5;
            case 1: j += 2;
			case 5: j += 5;
			default : j += 4;			
		}
		printf("%d ",j);
	}
	//question 3
	int k = -5;
	while (k <= 5) {
		if ( k >= 0)
		   break;
		else {
			k++;
			continue;
		}
		printf("neso");
    }
	//question 4
	unsigned int f = 500;
	while (f++ != 0);
		printf("%d",f);
		return 0;
}
