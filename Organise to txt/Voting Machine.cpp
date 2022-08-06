#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class Candidate{//class of the candidate
	string CandidateName;
	int votes=0;
	public:	
	void increasevote(){
	votes++;//function for increase in function
	}
    string getCandidateName(){
    	return CandidateName;//getter for Name
	}	
	int getvote(){
		return votes;//getter for votes
	}
	void setCandidateName(string name){
		CandidateName=name;//setter for Name
	}
};
int main(){
	Candidate c1,c2;
	string Name;
	int voters;
	char vote;
	cout<<"What is the Name of the first candidate ? ";
	cin>>Name;
	c1.setCandidateName(Name);//CandidateName of first candidate set
	cout<<"What is the Name of the second candidate ? ";
	cin>>Name;
	c2.setCandidateName(Name);//CandidateName of second candidate set
	cout<<"What is the amount of voters:";
	cin>>voters;//setting the limit for voters
	for(int i=0;i<voters;i++){
	system("cls");
	//display voting screen
	cout<<"Who would you like to vote for?\n";
	cout<<"1)"<<c1.getCandidateName();
	cout<<"\t\tor \t\t2)"<<c2.getCandidateName()<<"\n";
	vote=getch();//vote input
	if(vote=='1'){
		c1.increasevote();
		cout<<"\nvote registered";//vote for candidate 1
	}
	else if(vote=='2'){
		c2.increasevote();
		cout<<"vote registered";//vote for candidate 2
	}
	else{
		cout<<"Invalid input..try again please";
		i--;
	}
	Sleep(1000);//delay in program
	}
	system("cls");
	//winner if else
	if(c1.getvote()>c2.getvote()){
	cout<<"THE WINNER IS :"<<c1.getCandidateName();
	}
	
	else if(c1.getvote()<c2.getvote()){
	cout<<"THE WINNER IS :"<<c2.getCandidateName();
	}
	else{
		cout<<"ITS A DRAW";
	}
	
	
}
