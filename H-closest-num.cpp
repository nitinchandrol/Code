#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
	int n,temp;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	int min_diff=v[1]-v[0];
	for(int j=2;j<n;j++){
		min_diff=min(min_diff,v[j]-v[j-1]);
	}
	for(int k=1;k<n;k++){
		if(v[k]-v[k-1] == min_diff)cout<<v[k-1]<<" "<<v[k]<<" ";
	}
}
