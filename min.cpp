//min
#include <iostream>
using namespace std;

int main() {
	int a[20],i,n,min;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	min=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	cout<<min;
			
	
	return 0;
}
