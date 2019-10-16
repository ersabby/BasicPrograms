//Author: Saurabh Patil
//e-mail: er.saurabhpatil@gmail.com
//Topic:  List the prime numbers
#include<stdio.h>
void main()
{
	int i,j,limit;

	printf("Enter number upto which prime numbers are to be printed: ");
	scanf("%d",&limit);
	printf("\nPrime numbers are:\n");

	for(i=2;i<=limit;i++)
	{
		int count=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf(" %d",i);
		}
	}
	printf("\n");
}
