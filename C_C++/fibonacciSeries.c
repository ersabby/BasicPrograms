//Author: Saurabh Patil
//e-mail: er.saurabhpatil@gmail.com
//Topic: Fibonacci Series in C

#include<stdio.h>
int fibonacci(int n);
int main()
{
	int terms;
	printf("\nEnter the number of terms required in fibonacci series:");
	scanf("%d",&terms);
	fibonacci(terms);
	return 0;
}

int fibonacci(int n)
{
	int a=0,b=1,c,i;
	printf("Fibonacci Series: %d %d", a, b);	 //Printing the first two elements
	for(i=02;i<n;++i)
	{
		c=a+b;
		printf(" %d", c);//Printing next element
		a=b;
		b=c;
	}
printf("\n");
}
