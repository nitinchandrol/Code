#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int ans(vector<int> :: iterator itr_b,vector<int> :: iterator itr_e){
	int sz=distance(itr_b,itr_e);
	if(sz <= 1)
		return 0;
		else {
		vector<int> :: iterator itr_mx,itr_last=itr_e,itr_2nd=itr_b,itr_next2mx;
		itr_last--;
		itr_2nd++;
		itr_mx=max_element(itr_b,itr_e);
		itr_next2mx=itr_mx;
		itr_next2mx++;
		cout<<"last "<<*itr_last<<"max "<<*itr_mx<<"2nd "<<*itr_2nd<<"next2max "<<*itr_next2mx<<"\n";
		if(*itr_mx == *itr_b){
			return *itr_mx + ans(itr_2nd,itr_e);
			}
		if(*itr_mx == *itr_last){
			return *itr_mx + ans(itr_b,itr_last);
			}
		return 2*(*itr_mx)+ans(itr_b,itr_mx)+ans(itr_next2mx,itr_e);
	}
}

int main(){
	int n,temp;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	cout<<ans(v.begin(),v.end())<<"\n";
	return 0;
}

