#include<iostream>
#include<string.h>
using namespace std;
class String
{
char str[20];
public:
	void write()
	{
		cout<<"enter a string"<<endl;
		cin>>str;
	}
	void read(){
		cout<<"string is ="<<str<<endl;
	}
	String operator +(String X)    // operator overloading
	{   String t;
		strcpy(t.str,str);
		strcat(t.str,X.str);
		return t;
	} 
};
int main(){
	String s1,s2,s3;
	s1.write();
	s2.write();
	s3=s1+s2;
	s3.read();
	return 0;}
