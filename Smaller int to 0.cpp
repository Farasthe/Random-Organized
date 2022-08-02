#include<iostream>
using namespace std;
int zerosmaller(int&,int&);
int main(){
int a,b;
cout<<"Enter an integer ";
	cin>>a;
cout<<"Enter another integer ";
	cin>>b;
	zerosmaller(a,b);
	cout<<"Turning smaller number to 0"<<endl;
	cout<<a<<" "<<b;
	return 0;
}
int zerosmaller(int &a,int &b){
	if(a>b){b=0;
	return b;
	}
	if(a<b){a=0;
	return a;
	}
}

