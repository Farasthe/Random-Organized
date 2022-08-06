#include <iostream>
using namespace std;
struct Students
	{
  		int rollno;
  		string StudentName;//structure of student
        string deparment;
        
	}s[20];
	
int main(){
	for(int i=1;i<=5;i++){//loop that will continue for 20 students
    s[i].rollno=i;//assingning roll no
    //inputing details
	cout<<"The details of the "<<i<<" Student\n";
	cout<<"What is the name of Student? ";
	cin>>s[i].StudentName;
	cout<<"What is the Department of the Student? ";
	cin>>s[i].deparment;
	
	system("cls");
	}
     for(int i=1;i<=5;i++){
     	cout<<"Details of "<<i<<" Student\n";
     	cout<<"\nStudent name is "<<s[i].StudentName;
     	cout<<"\nStudent Rollno is "<<s[i].rollno;
     	cout<<"\nStudent Department is "<<s[i].deparment<<"\n\n\n";
	 }
	
	return 0;
}
