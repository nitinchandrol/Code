#include <iostream>

using namespace std;

int main(){
	double n,sum;
	double i=1.0;
	int ans;
	while(cin>>n && n != 0){
		ans=1;
		sum=0;
		i=2.0;
		while(n > (1.0/i)){
			n=n-(1.0/i);
			//sum=sum+(1.0/i);
			ans++;
			i++;
		}
		cout<<ans<<" card(s)\n";
	}
}
