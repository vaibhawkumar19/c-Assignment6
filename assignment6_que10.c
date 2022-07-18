//10. Write a program to reverse a given numbe
#include <stdio.h>
int main()
{
	int rev=0,r,n;
	printf("enter the no to reverse ");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	printf("reverse number:- %d",rev);
	return 0;
}
		

