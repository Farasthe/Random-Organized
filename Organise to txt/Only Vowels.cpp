#include<iostream>

using namespace std;
int main(){
	char vowels[5];//vowels
	char chars[]={"abcdefghijklmnopqrstuvwxy"};//alphabets
		int j;
	for(int i=0;i<=27;i++){
		if(chars[i]=='a' ||chars[i]=='e' || chars[i]=='i' || chars[i]=='o' || chars[i]=='u'){
			vowels[j]=chars[i];//telling the program if the character at index 'i' of array chars is any of the vowels then
			j++;              // store the character at index 'i' in array vowels at index 'j'
		}
		
		
	}
	
	for(int i=0;i<5;i++){
		cout<<vowels[i];//displaying the vowels stored in vowel array
	}
}
