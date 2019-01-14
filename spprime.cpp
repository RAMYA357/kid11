//spprime
#include <iostream>
using namespace std;

int main() {
	int n,k,i,j;
	cin>>n>>k;
	for(j=n+1;j<k;j++)
	{
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
				break;
			}
		}
	if(i==j)
	{
		cout<<j<<" ";
	}
	}
	return 0;
}
