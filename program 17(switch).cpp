#include<stdio.h>
#define y 2
#define z 23

int main()
{
	int x = 2;
	switch(x)
	{
		case y : printf("number is 2");
		    break;
	    case z : printf("number is 23");
	        break;
	    default : printf("default case");
	        break;
	}
}
