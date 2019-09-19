#include<stdio.h>
struct employee {
	char *name;
	int age;
	int salary;
};
int manager() {
	struct employee manager;
	manager.age = 27;
	if (manager.age > 30) {
		manager.salary = 35000;
	}
	else {
		manager.salary = 45000;
	}
	return manager.salary;
}
int main()
{
	struct employee emp1;
	struct employee emp2;
	printf("enter the salary of emp1:");
	scanf("%d",&emp1.salary);
	printf("enter the salary of emp2:");
	scanf("%d",&emp2.salary);
	printf("emp1 amd emp2 salries are : %d and %d",emp1.salary,emp2.salary);
	printf("manager salary is : %d ",manager());
	
}
