//8. Write a program to check whether a given number is a Prime number or not
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the no ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++){
	if(n%i==0)
		break;
	}
	if(n==i)	
		printf("prime");
	else
		printf("not prime");

}
