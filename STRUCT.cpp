#include<stdio.h>
#include<conio.h>

struct Organization{
	char name[10];

struct Employees{
		char name[20];
		
	}emp[15];
	
}org;


int main()
{
	int i;
	
	printf("Enter Name of Organization :\t\n");
	scanf("%s", org.name);
	printf("Enter Employees Name:\t\n");
	
	for(i=0; i<15; i++)
	{
		printf("Enter Employee Name %d:", i+1);
		scanf("%s", org.emp[i].name);
		printf("\n");
		
		
	}
	printf("%s\n", org.name);
	printf("S.NO.\t\tName\n");
	printf("\n");
	
	for(i=0; i<15; i++)
	{
		printf("%d\t\t%s\n",i+1,org.emp[i].name);
		
		
}
return 0;
}

