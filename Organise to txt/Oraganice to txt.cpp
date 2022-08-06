#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;

int sort(){
	
	string line,dept;
	//setting identifiers for all files. with the emp file being read and the rest of the files being write
	ifstream emp;
	ofstream it;
	ofstream pro;
	ofstream admin;
	ofstream sales;
	//opening the files using fstream
	emp.open("emp.txt");
	pro.open("Production.txt");
	admin.open("Admin.txt");
	sales.open("Sales.txt");
	it.open("IT.txt");
	while(getline(emp,line))//this loop will run as long as there is a line  left to read in the file 
		{
		
		if(line[line.find("Admin")]=='A'){//this if tries to find Admin and if it does find " Admin " in the line it is true
			admin<<line<<endl;
		}
		else if(line[line.find("Production")]=='P'){//this if tries to find Production and if it does find " Production " in the line it is true
		 pro<<line<<endl;
		}
		else if(line[line.find("IT")]=='I'){//this if tries to find IT and if it does find " IT " in the line it is true
		it<<line<<endl;
		}
		else if(line[line.find("Sales")]=='S'){//this if tries to find Sales and if it does find " Sales " in the line it is true
		sales<<line<<endl;
		}
		else{
			cout<<"ERROR!";//when the deparment doesnt exist or there is an error in the department part of the files
			return 0;
		}
		
		}
		//closing all files
	emp.close();
	pro.close();
	admin.close();
	sales.close();
	it.close();
	
}

int main(){
	sort();
	cout<<"DATA SORTED   ";
	return 0;
	
}
