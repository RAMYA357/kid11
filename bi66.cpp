#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,i,prime=0;
	cin>>n;
	if(num%2==0&&num!=2)
	{
		cout<<"no";
		return 0;
	}
	for(i=2;i<=n/2;i++)
	{
		prime=1;
		break;
	}
	if(prime==0)
	{
		cout<<"yes";
	}
	else
	{
		cout<<"no";
	}
	return 0;
}
