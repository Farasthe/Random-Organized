#include<iostream>
#include<windows.h>
using namespace std;
class Person{
	private:
		string name;
		int age;
		float bonus;
	public:
		float salary;
	    void getdata(){
	    	cout<<"Enter the Name: ";
	    	cin>>name;
	    	cout<<"Enter the age : ";
	    	cin>>age;
	    	cout<<"Enter the salary :";
	    	cin>>salary;
		}	
		void displaydata(){
			cout<<"Name  : "<<name<<endl;
			cout<<"Age  : "<<age<<endl;
			cout<<"Salary  : "<<salary<<"$"<<endl;
		   }
		void getbonus(){
			bonus=0;
			 cout<<"Bonus of the person is : "<<bonus<<"$"<<endl;
		}   
};
class Admin: public Person{
   
    		float bonus;
    public:
    	void getbonus(){
			bonus=salary/10;
    		cout<<"Bonus of the admin is : "<<bonus<<"$"<<endl; 
		}
    	
};

class Salesman: public Person{
   
    	float bonus;
    public:
    	void getbonus(){
    		bonus=salary/25;
			cout<<"Bonus of the Salesman is : "<<bonus<<"$"<<endl; 
		}
    	
};
int main(){
	Person p;
	Salesman s;
	Admin a;
	cout<<"PERSON:"<<endl;
	p.getdata();
	p.displaydata();
	p.getbonus();
	cout<<endl;
	system("pause");
	system("cls");
	cout<<"SALESMAN:"<<endl;
	s.getdata();
	s.displaydata();
	s.getbonus();
	cout<<endl;
	system("pause");
	system("cls");
	cout<<"ADMIN:"<<endl;
	a.getdata();
	a.displaydata();
	a.getbonus();
	cout<<endl;
	system("pause");
	
}
/*
	*/
