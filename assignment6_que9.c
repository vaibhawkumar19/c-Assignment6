//9. Write a program to calculate LCM of two numbers
#include<stdio.h>
int main()
{
		int n,a,b;
		printf("enter two number ");
		scanf("%d %d",&a,&b);
		n=(a>b)?a:b;
		while(1)
		{
			if(n%a==0 && n%b==0){
				printf("The LCM obtained from %d and %d is %d.", a, b, n);
				break;
		}
		++n;
	}
}
/*#include <stdio.h>
int main() {
	int x, y, res;
	printf("Enter two positive integers: ");
	scanf("%d %d", &x, &y);
	res = (x > y) ? x : y;

	while (1) {
		if (res % x == 0 && res % y == 0) {
			printf("The LCM obtained from %d and %d is %d.", x, y, res);
			break;
		}
		++res;
	}

	return 0;
}

*/
