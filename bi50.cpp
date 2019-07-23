//bi
#include <iostream>
using namespace std;
bool power(int n)
{
	if(n==0)
	{
	return 0;
	}
		while(n!=1)
	{
		if(n%2!=0)
		{
			return 0;
		}
		n=n/2;
	}
	return 1;
}
int main() {
	// your code goes here
	int n;
	cin>>n;
    power(n)?cout<<"yes":cout<<"no";
	return 0;
}
