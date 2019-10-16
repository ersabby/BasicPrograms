#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\nEnter value for a: ");
	scanf("%d", &a);
	printf("\nEnter value for b: ");
	scanf("%d", &b);
	printf("\nEnter value for c: ");
	scanf("%d", &c);
	printf("\nEntered values are: a=%d ,b=%d, c=%d", a, b, c);
	if ( a>b && a>c)
		printf("\na is largest value\n");
	else if (b>a && b>c)
		printf("\nb is largest value\n");
	else
		printf("\nc is largest value\n");
	return 0;

}
