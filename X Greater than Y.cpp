#include<iostream>
using namespace std;
void value(int,int);
int main(){
int x,y;
	cout<<"Enter a number ";
	cin>>x;
	
	cout<<"Enter another number ";
	cin>>y;
	value(x,y);
	return 0;
}
void value(int x,int y){
	if(x>y){cout<<x<<" is greater than "<<y;
	}
	
	if(y>x){cout<<y<<" is greater than "<<x;}

 else if (y=x){cout<<y<<" is equal to "<<x;}

}
