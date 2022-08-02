#include<iostream>
using namespace std;;
int main(){
bool r=1;
do{
    int x,y;
	char a;
    
	cout<<"Enter the first number: ";
	cin>>x;//First integer registered//
	cout<<endl<<"Enter the second nunber : ";
	cin>>y;//Second integer registered//
	cout<<endl<<"Enter any arthimetic operator (+,-,*,/) :";
	cin>>a;
	
	switch (a)
{
		case '+':
		cout<<endl<<"The Addition of "<<x<<" and "<<y<<" is "<<x+y;
		break;
	case '-':
		cout<<endl<<"The Subtraction of "<<x<<" and "<<y<<" is "<<x-y;
	break;
	case '*':
		cout<<endl<<"The Multiplication of "<<x<<" and "<<y<<" is "<<x*y;
	break;
	case '/':
			cout<<endl<<"The Divison of "<<x<<" and "<<y<<" is "<<(float)x/(float)y;
break;
 default :
 cout<<"\ninvalid operater";
	}	
	cout<<endl<<"\nInput 1 to continue or Input 0 to close the Calculator : ";
	cin>>r;
	cout<<endl;
if(r!=1 && r!=0){
	r=1;
}	
}while(r>0);
	return 0;
}//main end
