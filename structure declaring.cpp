#include<stdio.h>
	struct {
		char *engine;
	}car1,car2;
	int main() {
		car1.engine = "tmr cal 181";
		car2.engine = "apache lool 87";
		printf("%s",car1.engine);
		printf("\n%s",car2.engine);
		
	}
