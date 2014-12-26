#include <iostream>
#include <vector>
using namespace std;
int main(){
	int x,a,b,next;
	vector<int> v;
	vector<int> ans;
	cin>>x;
	cin>>a;
	cin>>b;
	v.push_back(-1);
	ans.push_back(-1);
	for(int i=1;i<=x;i++){
		if(i != a){
			cin>>next;
			v.push_back(next);
			ans.push_back(next);
		}
		else{
			v.push_back(0);
			ans.push_back(0);
		}
	}
	int par,cur;
	cur=b;
	while(v[cur] != 0){
		par=v[cur];
		ans[par]=cur;
		cur=par;
	}
	for(int j=1;j<=x;j++){
		if(j != b)cout<<ans[j]<<" ";
	}
	cout<<"\n";
}
