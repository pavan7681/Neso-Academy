#include<stdio.h>
//	static int i;
//	static int i = 27;
	static int i;
	int main()
	{
        int var = 0x43ff;
		static int i = 27;
		printf("%d",i);
		printf("\n%x",var);
		printf("\n%d",var);
		return 0;
		
	}

