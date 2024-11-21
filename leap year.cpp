#include<iostream>
using namespace std;
int main(){
	int days;
	cout<<"Enter days to check for leap year"<<endl;
	cin>>days;
	if(days>=366){
		cout<<"it is a leap year";
		
	}
	else{
		cout<<"it is not a leap year";
	}
	return 0;
	
}
