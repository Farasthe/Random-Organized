#include<iostream>

using namespace std;

int main(){ 
float p, s,pe;
	cout << "Enter pounds: ";
	cin >> p;
	cout << "Enter shillings: ";
	cin >> s;
	cout << "Enter pence: ";
	cin >> pe;
	float tpe,tp;
	 tpe=(pe / (12 * 20)) + s / 20;
	 tp=p+tpe;
	cout << "Decimal Pounds: " << tp;
	return 0;
}
	
