//3. Write a program to calculate sum of first N odd natural numbers
#include<stdio.h>
int main()
{
	int n,i,s=0;
	printf("Enter the no ");
	scanf("%d",&n);
		for(i=1;i<=2*n;i+=2)
	{
		s+=i;
	}
	printf("%d ",s);
	return 0;
}
