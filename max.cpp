//max
#include <iostream>
using namespace std;

int main() {
	int a[20],i,n,max;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	cout<<max;
			
	
	return 0;
}
