//5. Write a program to calculate sum of cubes of first N natural numbers
#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("enter the no ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s+=i*i*i;
	}
	printf("%d",s);
	return 0;
}
