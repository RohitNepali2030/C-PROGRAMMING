#include<stdio.h>

int main()
{
	int i, n, j;
	printf("Enter Number of n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d", i);
	}
	
			printf("\n");
		}

	
		for(i=i-2; i>=1; i--)
		{
			for(j=1; j<=i; j++)
			{
				printf("%d",i);
			}
			printf("\n");
	}
		
	return 0;
	}


