#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main(){
	int n,temp,a,sz;
	char str;
	vector<int> v;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>str;
		cin>>temp;
		a=0;
		if(str == 'a'){
			vector<int> :: iterator itr_ins = upper_bound(v.begin(),v.end(),temp);
			v.insert(itr_ins,temp); 
		}
		else {
			vector<int> :: iterator itr_rmv = find(v.begin(),v.end(),temp);
			if(itr_rmv == v.end()){
				a=1;
			}
			else {
				v.erase(itr_rmv);
			}
		}
		sz= v.size();
		//cout<<"sz "<<sz<<"\n";
		for(int j=0;j<sz;j++)
			//cout<<v[j]<<" ";
		//cout<<"\n";
		if(sz == 0)a=1;
		if(a == 1)cout<<"Wrong!\n";
		else {
			if(sz%2 == 1){
				cout<<v[(sz/2)]<<"\n";
			}
			else
				cout<<(v[(sz/2)] + v[(sz/2)-1])/2.0<<"\n";
		}
	}
}
