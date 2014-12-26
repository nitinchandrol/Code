#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
using namespace std;

bool is_prime(int n){
	if(n == 2)return true;
	for(int i=2;i<=sqrt(n);i++)
		if(n%i == 0)return false;
	return true;
}

int main(){
	vector<int> v;
	int cube,count;
	for(int i=2;i<100;i++){
		if(is_prime(i)){
			cube=i*i*i;
			count=1;
			while(cube*count<=1000000) {
				v.push_back(cube*count);
				count++;
				}
			}
	}
	sort(v.begin(),v.end());
	v.erase( unique( v.begin(), v.end() ), v.end());
	//cout<<v.size()<<" ";
	//for(int i=0;i<v.size();i++)
		//cout<<v[i]<<" ";
	int ans[1000001];
	int indx=0;
	for(int i=1;i< 1000001;i++){
		if(i == v[indx]){
			ans[i]=-1;
			indx++;
		}
		else ans[i]=i-indx;
	}
	int test,temp;
	cin>>test;
	for(int i=1;i<=test;i++){
		cin>>temp;
		cout<<"Case "<<i<<": ";
		if(ans[temp] == -1)cout<<"Not Cube Free\n";
		else cout<<ans[temp]<<"\n";
	}
}
