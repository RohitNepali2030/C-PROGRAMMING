#include<stdio.h>
#include<conio.h>

struct person{
	char name[20];
	int salary;
}person;

int main()
{
	FILE*file;
	file = fopen("Salary.txt", "r");
	printf("Name\tSalary");
	while(fscanf(file, "%s", person.name)!=-EOF)
	{
		fscanf(file, "%d", &person.salary);
		
		printf("\n%s\t%d", person.name, person.salary);
	}
	return 0;
}
