n#include <iostream>
using namespace std;
struct Students
	{
  		string rollno;
  		string Name;
        string dept;
	}s[20];
	
int main(){
	for(int i=1;i<=2;i++){
    s[i].ID=i;
	cout<<"Input the deatils of the "<<i<<" Student\n";
	cout<<"What is the name of Student? ";
	cin>>s[i].Name;
	cout<<"What is the rollno of Student? ";
	cin>>s[i].rollno;
	cout<<"What is the Department of Student? ";
	cin>>s[i].dept;
	
	system("cls");
	}
	return 0;
}
