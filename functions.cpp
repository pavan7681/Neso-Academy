#include<stdio.h>

int areaofRectangle (int length,int breadth) {
	              int area;
	              area = length * breadth;
	              return area;
}
int main() {
	int l = 10,b = 5;
	int area = areaofRectangle(l,b);
	printf("\n%d",area);
	
}
