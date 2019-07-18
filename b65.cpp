#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n1,n2,prod;
	cin>>n1>>n2;
	prod=n1*n2;
	if(prod%2==0)
	{
		cout<<"even";
	}
	else
	{
		cout<<"odd";
	}
	
	return 0;
}
