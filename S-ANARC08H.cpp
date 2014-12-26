#include<iostream>
#include<math.h>
using namespace std;
/*int ans(int n,int k){
	if(n == 1)return 1;
	return (ans(n-1,k) + k-1)%n + 1;
}*/
int main(){
	int n,d,ans;
	while(cin>>n && n != 0){
		cin>>d;
		ans=1;
		for(int i=2;i<=n;i++){
			ans=(ans + d - 1)%i +1;
		}
		cout<<n<<" "<<d<<" "<<ans<<"\n";
	}
}
	
	
