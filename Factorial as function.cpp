#include<iostream>
#include<conio.h>
using namespace std;
void fact(int x);


int main(){ 
int x;
cout<<"Enter any integer ";
cin>>x;
cout<<endl;
fact(x);
return 0;}
//factorial function//


void fact(int x){
int	factorial=1;
for(int i=1;i<=x;++i){
factorial=factorial*i;
}
cout<<"The factorial of given number is "<<factorial;
}
