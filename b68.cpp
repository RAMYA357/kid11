#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,r,count=1;
	cin>>n;
	while(n>0){
		r=n%10;
		count++;
		n=n/10;
	}
	cout<<count-1;
	return 0;
}
