#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	int a;
	cout<<"enter a num ";
	cin>>a;
	if(a>0 && a<50)
	{ 
	if (a % 2 ==0)
{ for(int i=2;i<50;i+=2)cout<<i<<" ";
}
		
else		
{ for(int i=1;i<50;i+=2)cout<<i<<" ";
}}

else{cout<<"invalid input";
}
		return 0;
	}
