#include <iostream>
using namespace std;
int main(){
	unsigned long long k,m=1000000007;
	int t,n;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		if(n <= 3)cout<<0<<"\n";
		else {
			cout<<(n*(n-1)*(n-2)*(n-3)/24)%m<<"\n";
		}
	}
}
