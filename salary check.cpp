#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	string des;
	int salary=0;
cout<<"Enter designation (clerk/Lecturer/assistant)";
cin>>des;
cout<<endl;

if(des=="clerk"||des=="Clerk"){

salary=20000;
cout<<"The salary is "<<salary;
}	

else if(des=="assistant"||des=="Assistant"){
salary=30000;
cout<<"The salary is "<<salary;}	

else if(des=="lecturer"||des=="Lecturer"){
salary=20000;
cout<<"The salary is 40,000";
}	
else{cout<<"invalid input";
}
	return 0;
}
