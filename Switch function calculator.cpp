#include<iostream>
using namespace std;
int count=0;
int calc(char);
int main(){
char a;
	cout<<"enter an operator ";
	cin>>a;
	calc(a);
}
int calc(char a){
do{
	if(a!='+' && a!='-' && a!='*' && a!='/' && a!='%'){
		cout<<"invalid operator\n";
		cout<<"enter an operator ";
		cin>>a;
		count++;
		continue;
	}
	else{
		int x,y;
		cout<<"enter a number ";cin>>x;
		cout<<"enter another number ";cin>>y;
			switch (a)
{
		case '+':cout<<endl<<"The Addition of "<<x<<" and "<<y<<" is "<<x+y;
		break;
    	case '-':cout<<endl<<"The Subtraction of "<<x<<" and "<<y<<" is "<<x-y;
    	break;
	    case '*':cout<<endl<<"The Multiplication of "<<x<<" and "<<y<<" is "<<x*y;
	    break;
     	case '/':	cout<<endl<<"The Divison of "<<x<<" and "<<y<<" is "<<(float)x/y;
        break;
	}	
         break;
	}
}while(count<2);
}

