#include<stdio.h>
#include<stdlib.h>

int strleng(char string[]);
char strReverse(char string[]);
int vowelCount(char string[]);

int main()
{
	//Length of string
	char string[40];
	int choice;
	while(1)
	{
		printf("\n\n*******************Welcome to string operations*******************");
		printf("\n1.To find length of the string\n2.To reverse an entered string\n3.To count number of vowles in an entered string\n4.Exit");
		printf("\nEnter your choice of operation: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("\nWelcome to string length function..!!!");
				printf("\nEnter a string: ");
				scanf("%s",string);
				printf("Entered string: %s\n",string);
				printf("\nLength of string: %d", strleng(string));
				break;
			case 2: printf("\nWelcome to string reverse function..!!!");
                                printf("\nEnter a string: ");
                                scanf("%s",string);
                                printf("Entered string: %s\n",string);
				strReverse(string);
				break;
			case 3: printf("\nWelcome to vowel counter function..!!!");
                                printf("\nEnter a string: ");
                                scanf("%s",string);
                                printf("Entered string: %s\n",string);
				vowelCount(string);
				break;
			case 4: exit(0);
		}
	}
	printf("\n");
}

//Function to print length of the string
int strleng(char string[])
{
	int count=0;
	while(string[count]!='\0')
	{
		count++;
	}
	return count;
}

//Function to print reverse of string
char strReverse(char string[])
{
	int i,j=0,count;
	char Revstr[50];
	count = strleng(string);

	for(i=count-1 ; i>=0 ; i--)
	{
		Revstr[j++]=string[i];
	}
	Revstr[i] = '\0';
	printf("\nReversed string: %s", Revstr);
}

//Function to count number of vowles in an entered string
int vowelCount(char string[])
{
	int c=0,count=0;
	char ch;
	while(string[c]!='\0')
	{
		if(string[c] == 'a'||string[c] == 'e'||string[c] == 'i'||string[c] == 'o'||string[c] == 'u'\
			||string[c] == 'A'||string[c] == 'E'||string[c] == 'I'||string[c] == 'O'||string[c] == 'U')
			count++;
			c++;
	}
	printf("\nNumber of vowels in entered string are: %d", count);
}
