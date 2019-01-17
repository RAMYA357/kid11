//hr
#include <iostream>
using namespace std;
int main() {
	int hr1,min1,hr2,min2,hr3,min3;
	cin>>hr1>>min1;
	cin>>hr2>>min2;
	hr3=hr1-hr2;
	min3=min1-min2;
	if(hr3<0)
	{
	hr3=-hr3;
	}
	if(min3<0)
	{
	min3=-min3;
	}
	cout<<hr3<<" "<<min3;
	return 0;
}
