#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

int main(){
	int t,n,temp,mid,freq;
	vector<int> v;
	map<int,int> mp;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		if(n == 0)cout<<"NO\n";
		else {
		mp.clear();
		v.clear();
		for(int j=0;j<n;j++){
			cin>>temp;
			v.push_back(temp);
			mp[temp]++;
		}
