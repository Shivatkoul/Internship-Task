#include<iostream>

using namespace std;

int main(){
	char op;
	float num1,num2;
	
	cout<<" enter the operands"<<endl;
	cin>>num1>>num2;
	
	cout<<" enter the operator"<<endl;
	cin>>op;
	
	switch(op)
	{
		case '+':
			cout<<num1<<" + "<<num2<<"="<<num1+num2;
			break;
		case '-':
			cout<<num1<<" - "<<num2<<"="<<num1-num2;
			break;
		case '*':
			 cout<<num1<<" * "<<num2<<"="<<num1*num2;
			 break;
		case '/':
			   cout<<num1<<" / "<<num2<<"="<<num1/num2;
			   break;
		default:
			// if the operator is other than +,-,*,/ error messsge is shown
			cout<<" Error! operator is not correct";
			break;
	}

    return 0;

}

