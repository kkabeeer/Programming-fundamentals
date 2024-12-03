#include<iostream>
using namespace std;
int main()
{
	int table;
	cout<<"enter a number for a table:";
	cin>>table;
	char equal= '=';
	char space= ' ';
	char multiply= 'x';
	int i;
	for(int i=1;i<=10;i++){
		cout<<table<<space<<multiply<<space<<i<<space<<equal<<space<<i*table<<endl;
	}
	return 0;
	}
