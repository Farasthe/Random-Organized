
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	unsigned long n;
	cout << "\nEnter a number: ";
	cin >> n;
	for(int j=1; j<=200; j++){
		cout << setw(5) << j*n << "  "; 
		if( j%10 == 0 )
			cout << endl;
	}
	cout << endl;
	return 0;
}
