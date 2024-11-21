#include<iostream>
using namespace std;
int main()
{
	double num1,num2;
	char op,cont;
	do{
		cin>>num1>>op>>num2;
		if(op=='+') cout<<num1+num2<<endl;
		else if(op=='-') cout<<num1-num2<<endl;
		else if(op=='/') cout<<num1/num2<<endl;
		else if(op=='*') cout<<num1*num2<<endl;
		cin>>cont;
		while (cont=='y'|| cont=='Y');}
		return 0;
	}
