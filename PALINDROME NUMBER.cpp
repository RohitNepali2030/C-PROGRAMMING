#include<stdio.h>

int main()
{
	int num , reverse_num =0, remainder, original_num ;
	printf("Enter A Number : ");
	scanf("%d", &num);
	original_num = num;
	
	while(num !=0)
		{ 
		remainder = num%10;
		reverse_num = reverse_num * 10 + remainder;
		num /= 10;
	}
	
	if(original_num == reverse_num)
	
		
		printf("%d is a Palindrome Number \n" , original_num);
	
		
	
	else 
	
	
		printf("%d is not a Palindrome Number \n" , original_num);
 
	
	return 0;
	
}
