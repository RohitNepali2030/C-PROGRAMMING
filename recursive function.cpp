#include<stdio.h>
int sum(int );
int main()
{
	int n,s;
 printf("enter any number u want");
 scanf("%d",&n);
 s=sum(n);
 printf("the sum of natural number is %d\t",s);
 return 0;
}
 int sum(int n)
{
 if(n!=0)

return n+ sum(n-1);

else

return n;

}
