#include<iostream>
using namespace std;
int main(){
	int a;
	int fact=1;
	cout<<"Enter a non zero number :";
	cin>>a;
		for(int i=1;a>=i;a--){
		   fact=fact*a;
		   
		}
		cout<<"factorial of the given number is "<<fact;
	return 0;
}
