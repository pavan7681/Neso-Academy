#include<stdio.h>
struct car {
	int carno;
	int car_milage;
};
int main() {
	struct car c[2];
	int i;
	for (i = 0;i < 2;i++) {
		printf("enter the car %d no :",i + 1);
		scanf("%d",&c[i].carno);
    	printf("enter the car %d milage:",i + 1);
		scanf("%d",&c[i].car_milage);
	}
		for (i = 0;i < 2;i++) {
		printf("car %d no : %d ",i + 1,c[i].carno);
    	printf("car %d milage : %d",i + 1,c[i].car_milage);
	}
}
