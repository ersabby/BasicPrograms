//Author: Saurabh Patil
//e-mail: er.saurabhpatil@gmail.com
//Topic:  'C' program to reverse a number
//Note: This program can reverse a number having maximum length of 10 digits.

#include<stdio.h>
int main()
{
	int number, reverse=0, i;
	printf("\nEnter a number: ");
	scanf("%d",&number);
	printf("\nEntered number is: %d", number);
	while(number!=0)
	{
		reverse = reverse * 10;
		reverse = reverse + number % 10;
		number = number/10;
	}
	printf("\nReversed number is %d\n", reverse);
	return 0;
}
