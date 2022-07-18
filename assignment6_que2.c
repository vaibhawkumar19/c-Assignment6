//2. Write a program to calculate sum of first N even natural numbers
#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter the no ");
	scanf("%d",&n);
	for(i=2;i<=2*n;i+=2)
	{
		s+=i;
	}
	printf("%d",s);
	return 0;
}
