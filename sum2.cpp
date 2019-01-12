#include <iostream>
using namespace std;

int main() {
	int i,A[10],n,k,sum=0;
cin>>n>>k;
for(i=0;i<n;i++)
{
	cin>>A[i];
}
for(i=0;i<k;i++)
{
	sum+=A[i];
}
cout<<sum;
	return 0;
}
