#include <iostream>
#include <string>
#include <vector> 
#include <algorithm>
using namespace std;

int main(){
	int n,next;
	cin>> n;
	vector<int> v;
	for(int i =0; i<n; i++){
		cin>>next;
		v.push_back(next);
	}
	sort(v.begin(),v.end());
	vector<int> count;
	int ans = n;
	int c=1,last=v[0];
	for(int i=1; i<n; i++){
		if(v[i] == last)
			c++;
		else{
			last = v[i];
			if(c >= 2){
				ans = ans + (c * (c -1))/2 ;
				//cout<<ans<<"\n";
			}
			c = 1;
		}
	}
	ans = ans + (c * (c -1))/2 ;
	cout<<ans<<"\n";
}