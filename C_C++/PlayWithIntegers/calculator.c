#include<stdio.h>
#include<stdlib.h>
int exponent(int x, int y);

int main()
{
	int choice,x,y;
	printf("Welcome to sabby's calculator");
	printf("\nEnter first number: ");
        scanf("%d", &x);
        printf("\nEnter second number: ");
        scanf("%d",&y);
	while(1)
	{
	printf("\n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division \n5.Modulo \n6.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("\nAddition is: %d", x+y);
			break;
		case 2: printf("\nSubtracttion is: %d", x-y);
			break;
		case 3: printf("\nMultiplication is: %d",x*y);
			break;
		case 4: printf("\nDivision is: %d", x/y);
			break;
		case 5: printf("\nModulous is: %d", x%y);
			break;
		case 6: exit(0);
		default: printf("Invalid choice");
			break;
	}
	printf("\n");
	}
}

int exponent(int x, int y)
{
	int i;
	for(i=0;i<=y;i++)
	{
		x=x*x;
	}
	return x;
}
