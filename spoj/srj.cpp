#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>
using namespace std;

int main(){
	string s;
	cin>>s;
	int cs=0,cj=0,sz=s.size();
	vector<int> s_v,j_v;
	for(int i=0; i<sz; i++){
		s_v.push_back(0);
		j_v.push_back(0);
	}
	for(int i = sz - 1; i>=0; i--){
		s_v[i] = cs;
		j_v[i] = cj;
		if(s[i] == 'S'){
			cs++;
		}
		if(s[i] == 'J'){
			cj++;
		}
	}
	int s_count = s_v[0],ans = 0;
	if(s[0] == 'S') s_count++;
	for(int i = 0; i<sz; i++){
		if(s[i] == 'R'){
			ans = ans + (j_v[i] * (s_count - s_v[i]));
		}
	}
	cout<<ans<<"\n";
}
