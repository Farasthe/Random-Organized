#include<iostream>
#include<conio.h>
using namespace std;
class Table{
	private:
		int i;
	public:
		void setnum(int NUM){
			i=NUM;
		}
	    void table(){
	    	for(int j=1;j<=10;j++){
	    		cout<<i<<" x "<<j<<" = "<<i*j<<endl;
			}
	}
};
int main(){
	while(true){
	Table t;
	char a; 
	int number;
	cout<<"Which number would you like the table of? ";
	cin>>number;
	t.setnum(number);
	a=getch();
	cout<<endl;
	if(a==32){
	t.table();
	return 0;
	} 
	else{
		cout<<"please press tab"<<endl;
	}


	}
}
