#include<iostream>
using namespace std;
int main()
{
	int x,y;
	char o;
	cout<<"Enter an integer ";
	cin>>x;
	cout<<"Enter another integer ";
	cin>>y;

	cout<<"Enter an operator(+,-,*,/,%) ";
	cin>>o;


	if(o=='+')
	{
	cout<<"The addition of the entered numbers is "<<x+y;
	}
	else if(o=='-')
    {
	cout<<"The subtraction of the entered numbers is "<<x-y;
    }
 
	else if(o=='*')
	{
	cout<<"The multiplication of the entered numbers is "<<x*y;
	}
	
	else if(o=='/')
	{
	cout<<"The division of the entered numbers is "<<(float)x/y;
    }   


	else if(o=='%')
	{
	cout<<"The remainder of the entered numbers is "<<x%y;
	}
	
	return 0;
}
