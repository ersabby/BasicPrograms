//Author: Saurabh Patil
//e-mail: er.saurabhpatil@gmail.com
//Title: Program checking whether entered number is leap year

#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter year in specified format (eg: 2012): ";
	cin>>year;
	if(year % 4 == 0)
	{
		if(year % 100 == 0)
		{
			if(year % 400 == 0)
				cout<<year<<" is a leap year";
			else
				cout<<year<<" is not a leap year";
		}
		else
			cout<<year<<" is a leap year";
	}
	else
		cout<<year<<"is not a leap year";
	return 0;
}
