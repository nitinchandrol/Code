#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
	int test,n,next,ans,last,itr;
	int val[1000001];
	vector<int> v;
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>n;
		for(int i=0;i<1000001;i++)
		val[i]=0;
		v.clear();
		for(int j=0;j<n;j++){
			cin>>next;
			v.push_back(next);
			val[next]++;
		}
		sort(v.begin(),v.end());
		ans=0;
		for(int k=0;k<n;k++){
			if(v[k] < 500001) {
				if((val[v[k]] != 0) && (val[v[k]*2] != 0)){
					ans++;
					val[v[k]]--;
					val[v[k]*2]--;
				}
			}
		}
		cout<<ans<<"\n";
	}
}

