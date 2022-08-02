#include<iostream>
using namespace std;
int main()
{
	int a,b,c,x,y;
	char o;
	cout<<"Enter an integer ";
	cin>>a;
	cout<<"Enter a different integer ";
	cin>>b;
	cout<<"Enter different integer ";
	cin>>c;
	cout<<"Enter an operator(+,-,*,/,%) ";
	cin>>o;

	if(a>b && a>c)
	{
	x=a;
	
     if(b>c){y=b;}
     else{y=c;}}
	
		if(b>a && b>c){
		x=b;
		
	  if(a>c){y=a;}
     else{y=c;}}
	
	if(c>a && c>b){
		x=c;
	  if(a>b){y=a;}
     else{y=b;}}
     
	a:
	switch(o)
	{
			case '+':cout<<"The addition of the entered numbers is "<<x+y;
		break;
 
 		case '-':cout<<"The subtraction of the entered numbers is "<<x-y;
		break;
	
			case '*':cout<<"The multiplication of the entered numbers is "<<x*y;
		break;
	
			case '/':cout<<"The division of the entered numbers is "<<(float)x/y;
 	break;
	
			case '%':cout<<"The remainder of the entered numbers is "<<x%y;
		break;
	
	}
	
	return 0;
}
