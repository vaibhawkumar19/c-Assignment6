//6. Write a program to calculate factorial of a number
#include<stdio.h>
int main()
{
	int n=5,fact=1;
	while(n>0)
	{
		fact=fact*n;
		n--;
	}
	printf("factorial of %d is ",fact);
	return 0;
}
