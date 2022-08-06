#include<iostream>

using namespace std;
int main(){
	char chars[]={"abcdefghijklmnopqrstuvwxyz"};//array of alphabets
	char consonents[21];//array of consonents
		int a;
	for(int b=0;b<28;b++){
		if(chars[b]!='a' &&chars[b]!='e' && chars[b]!='i' && chars[b]!='o' && chars[b]!='u'){
			//check wether the element of array character at index'b' is not vowel.
			consonents[a]=chars[b];//add the element of array at index'b' to array of consonents at index'a'
			a++;
		}
		
		
	}
	for(int i=0;i<21;i++){
		cout<<consonents[i]<<endl;//display consonents
	}
}
	
