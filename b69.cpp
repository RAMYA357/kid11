#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k,i,a[10];
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			cout<<"yes";
			break;
		}
	}
	if(i==n)
	{
		cout<<"no";
	}
	
	return 0;
}
