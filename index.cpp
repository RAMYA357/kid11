//index
#include <iostream>
using namespace std;

int main() {
	int a[20],i,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}

	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<i;
		cout<<"\n";
	}
		return 0;
}
