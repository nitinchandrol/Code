#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
	int t,n,k,next,ans;
	cin>>t;
	vector<int> v;
	for(int i=0;i<t;i++){
		cin>>n;
		cin>>k;
		v.clear();
		for(int j=0;j<n;j++){
			cin>>next;
			v.push_back(next);
		}
		sort(v.begin(),v.end());
		ans=v[k-1]-v[0];
		for(int j=1;j<=n-k;j++){
			ans=min(ans,v[k+j-1]-v[j]);
		}
		cout<<ans<<"\n";
	}
}
