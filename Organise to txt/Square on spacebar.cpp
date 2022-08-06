#include<iostream>
#include<conio.h>
using namespace std;
class Square{
	private:
		int a;//the integer we get from user
		int sq;//square to be returned
	public:
		void setnum(int NUM){
			a=NUM;//setter for i
		}
	    int square(){
	    	sq=a*a;//squaring i
	    	return sq;//returning square of i
	}
};
int main(){
	Square Sq;//creating object
	char space; //sapcebar
	int number;//number to be sent to member function of object sq
	cout<<"Which number would you like the square of? ";
	cin>>number;//user input
	Sq.setnum(number);//member function called
	
	while(true){
	cout<<"Please press the spacebar";
	space=getch();
	cout<<endl;
	//check wether spacebar was pressed or not
	if(space==32){
		cout<<"The square of "<<number<<" is "<<Sq.square();
	
	return 0;
	} 


	}return 0;
}
