#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int table;
	cout<<"enter a number for a table:";
	cin>>table;
	char equal= '=',multiply= 'x';
	int i;
	for(int i=1;i<=10;i++){
		cout<<table<<setw(2)<<multiply<<setw(2)<<i<<setw(2)<<equal<<setw(2)<<i*table<<endl;
	}
	return 0;
	}
