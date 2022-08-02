#include <iostream>
using namespace std;
int ctof(float);
int ftoc(float);
 int main(){
bool a;
cout<<"enter 1 if you want farahneit to celisues"<<endl<<"enter 0 if you want celsius to fahrenheit";
cin>>a;
float c,f;
if(a=1){
cout<<"Enter the value of fahrenit";
cin>>f; cout<<endl<<f<<"fahrenit in celsius is "<<ftoc(f);}
if(a=0){
cout<<"enter the value of celsius"; cout<<endl<<c<<"celsisu in fahrenit is"<<ctof(c);}
cin>>c;
return 0;}
int ftoc(float f,float c){
	c=(f-32)*5/9;
	return c;
}
int ctof(float c,float f){
	f=5/9*(c+32);
	return f;
}
	
