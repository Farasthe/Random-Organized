#include<iostream>
using namespace std;
class Sum{
	private:
		
	public:
		int sum(int a,int b){
		int c;
		if(a>b && b%2==0 && a%2!=0 && a>0 && b>0){
			c=a+b;
			cout<<c;
		}	
		else{
			cout<<"error";
		}	
			
		}
};
int main(){
Sum s;
int x,y;
cout<<"Enter a odd number ";
cin>>x;
cout<<"Enter a smaller even number ";
cin>>y;
s.sum(x,y);	
}
