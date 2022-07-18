//7. Write a program to count digits in a given number
#include<stdio.h>
int main()
{
	int n,count=1;
	printf("enter the digits ");
	scanf("%d",&n);
	{
		n=n%10;
		count=count+n;
	}
	printf("%d",n);
	return 0;
}
