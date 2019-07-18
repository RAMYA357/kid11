#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int i,j,a[10],n,sum=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	cout<<sum/n;
	
	return 0;
}
