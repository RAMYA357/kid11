#include <iostream>
using namespace std;
 
int main() {
	// your code goes here
	int n,r,sum=0;
	cin>>n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	cout<<sum;
	return 0;
}
