#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n1,n2,sum=0;
	cin>>n1>>n2;
    sum=n1+n2;
    if(sum%2!=0)
    {
    	cout<<"odd";
    }
    else
    {
    	cout<<"even";
    }
	return 0;
}
