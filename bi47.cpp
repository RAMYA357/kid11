//prog
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i,a[10],j,max,min,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

		cout<<a[0]<<" "<<a[n-1];
	
	return 0;
}
