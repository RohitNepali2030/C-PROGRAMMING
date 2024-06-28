#include<stdio.h> 
 int main()
{ 
    int i,j,n[20],temp;
    for(i=0; i<20; i++)
    {
    printf("enter the number %d=\t",i+1);
    scanf("%d",&n[i]);
    }
    for(i=0; i<20; i++)
    {
    for(j=i+1; i<20; j++)
    {
    if(n[i]>n[j])
    {
    temp=n[i];
    n[i]=n[j];
    n[j]=temp;
    }
    }
    }
    printf("number in ascending order is \t");
    for(i=0; i<20; i++)
    {
    printf("%d",n[i]);
    }
    return 0; 
}

