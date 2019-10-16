//Author: Saurabh Patil
//e-mail: er.saurabhpatilgmail.com
//Program to specify whether entered number is even or odd
#include<stdio.h>
int main()
{
	int number;
	printf("\nEnter a number: ");
	scanf("%d",&number);
	if(number % 2 ==0)
		printf("\n%d is an even number",number);
	else
		printf("\n%d is an odd number",number);
	printf("\n");
	return 0;
}
