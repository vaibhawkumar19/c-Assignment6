//1. Write a program to calculate sum of first N natural numbers
/*
		s=s+i;
	}
	printf("%d",s);
	return 0;
}*/
#include <stdio.h>

void main()
{
   int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe even numbers are :");
   for(i=1;i<=n;i++)
   {
     printf("%d ",2*i);
     sum+=2*i;
   }
   printf("\nThe Sum of even Natural Number upto %d terms : %d \n",n,sum);
}
