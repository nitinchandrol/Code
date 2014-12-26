#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
int ans(vector<int> :: iterator itr_b,vector<int> :: iterator itr_e){
	int sz =distance(itr_b,itr_e);
	if(sz == 0)return 10000;
	if(sz == 1)return *itr_b;
	if(sz == 2) {
		if(count(itr_b,itr_e,*itr_b) == 2)return *itr_b;
		else return 10000;
	}
	vector<int> :: iterator itr_t=itr_b,itr_last3=itr_b;
	vector<int> v_new;
	advance(itr_last3,sz-3);
	if(sz%2 == 1){
		while(itr_t != itr_last3){
			if(*itr_t == *(++itr_t))v_new.push_back(*itr_t);
			itr_t++;
		}
		int a=*itr_t,b=*(++itr_t),c=*(++itr_t);
		if(a == b)v_new.push_back(a);
		else {
			if(a == c)v_new.push_back(a);
			else {
				if(c == b)v_new.push_back(b);
			}
		}
	}
	else{
		while(itr_t != itr_e){
			if(*itr_t == *(++itr_t))v_new.push_back(*itr_t);
			itr_t++;
		}
	}
	return ans(v_new.begin(),v_new.end());
}

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
		freq=1,mid=v[0];
		for(int k=1;k<n;k++){
			if(mp[v[k]]> freq){
				freq=mp[v[k]];
				mid=v[k];
			}
		}
		//mid=ans(v.begin(),v.end());
		if(freq <= n/2)cout<<"NO\n";
		else cout<<"YES "<<mid<<"\n";
		/*sort(v.begin(),v.end());
		mid=v[n/2];
		freq=count(v.begin(),v.end(),mid);
		if(freq > (n/2)){
			cout<<"YES "<<mid<<"\n";
		}
		else cout<<"NO\n";*/
	}
	}
}
