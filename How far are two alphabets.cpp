#include<iostream>
using namespace std;

int main(){
	char a,b;
	int value;
	cout<<"insert a alphabet ";
	cin>>a;
	cout<<"insert another alphabet ";
	cin>>b;
	if(b>a){
		value=a;
	for( ;a<=b;a++){
		cout<<a<<" ";
	}
	cout<<"total = "<<a-value;
	}
	else if(b<a){
		value=b;
	for( ;b<=a;b++){
		cout<<b<<" ";
	}
	cout<<"total = "<<b-value;	}
	return 0;
}
