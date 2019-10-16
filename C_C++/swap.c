#include<stdio.h>
int main()
{
	int a=10,b=2,temp;
	if(a>b)
        {
                         temp=b;
                         b=a;
                         a=temp;
        }
	printf("a %d   b %d  ",a,b);


}
