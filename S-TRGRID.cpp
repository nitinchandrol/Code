#include <iostream>
using namespace std;
int main(){
	int test,m,n;
	char ans;
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>m;
		cin>>n;
		if(m == n){
			if(m%2 == 0)ans='L';
			else ans='R';
		}
		else {
			if(m > n){
				if(n%2 == 1)ans='D';
				else ans='U';
			}
			else {
				if(m%2 == 1)ans='R';
				else ans='L';
			}
		}
		cout<<ans<<"\n";
	}
}

