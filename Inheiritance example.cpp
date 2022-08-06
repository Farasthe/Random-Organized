#include<iostream>
using namespace std;
class Person{//base class person
	public:
    int Age;
	string Name;
	
};
class Employee:Person{//derived/child class empolyee 
	private://variables
	int Emp_id;
	float Salary,Net;
	public:
	Employee(string name,float salary,int id,int age){//paramterized consturctor
		Name=name;
		Salary=salary;
		Emp_id=id;
		float tax=salary/10;//let tax be 10% of salary
		Net=salary-tax;//net salary is salary after deduction/taxs.
	    Age=age;
	}
	void getdata(){
		cout<<"The Name of the empolyee is "<<Name<<endl;
		cout<<"ID of "<<Name<<" is "<<Emp_id<<endl;
		cout<<"Gross monthly salary of "<<Name<<  " is "  <<Salary<<endl;//Gross is salary before deductions/taxs
		cout<<"Net monthly salary of "<<Name<<" is "<<Net<<endl;
		cout<<"The age of the "<<Name<<" is "<<Age<<endl;
	}	
};
int main(){
	Employee e("Faraz",2000,12,42); //object created
	e.getdata();//displaying data
}
