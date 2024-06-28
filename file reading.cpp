#include<stdio.h>
struct Person{
	char name[10];
	int salary;
}person;

int main()
{
	printf("Enter Person Name : \n");
	scanf("%s", person.name);
	printf("Enter Salary : \n");
	scanf("%d", &person.salary);
	FILE*fp;
	fp=fopen("salary.txt","w");
	fprintf(fp, "Name : %s \n Salary : %d", person.name , person.salary);
	
	fclose(fp);
	
	return 0;
	
}
