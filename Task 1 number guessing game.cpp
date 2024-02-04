#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int num;
	int guess;
	int tries=0;
	srand(time(0));
	num=rand()%100+1;   // generates random number between 1 to 100
	cout<<"\t\t\t Welcome to Guess the Number Game \n\n";
	
	do
	{
		cout<<" enter your guess between 1 and 100:";
		cin>>guess;
		tries++;
		
		if(guess>num)
		   cout<<"too high!\n\n";
		else if(guess<num)
		   cout<<" two low!\n\n";
		   
		else
		    cout<< "\n Correct! You got it in"<< tries<<" guesses!\n";
		    
	}while(guess!=num);
	
	return 0;
	
}

