#include<CTYPE.H>
#include<iostream>

using namespace std;
int main(){
	char c;
	int check;
	cout<<"Enter any lower or upper case character :";
	cin>>c;
	check=islower(c);
	if(check=0){
		cout<<"Character is lower case";
	}
	else if(check=2){
		cout<<"Character is upper case";
	}
	else{
		cout<<"Error";
	}
	}
