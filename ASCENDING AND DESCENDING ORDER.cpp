#include<stdio.h>
#include<conio.h>

int main()
{
	int n[20], i, j, s;
	for(i=0; i<20; i++){
	
	printf("ENTER A NUMBER : \n");
	scanf("%d", &n[i]);
}
for(i=0; i<20; i++)
{
	for(j=i+1; j<20; j++)
	{
		if(n[i]>n[i])
	{
		s=n[i];
		n[i]= n[j];
		n[j]= s;
		
	}
}
}
printf("Ascending Order \n");

for(
i=0; i<20; i++)
{
	printf("%d\n", n[i]);
	
}
printf("Descending Order \n");

for(i=19; i>=0; i--)
{
	printf("%d\n", n[i]);
	
}
	return 0;
}

