#include<stdio.h>
int main()
{
	int number,i,count=0;
	printf("\nEnter a number: ");
	scanf("%d",&number);
	for(i=1;i<=number;i++)
	{
		if(number%i == 0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("\n%d is a prime number\n",number);
	}
	else
	{
		printf("\n%d is not a prime number\n",number);
	}
}
