#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <math.h>

using namespace std;

int ans(vector<int> :: iterator itr_b,vector<int> :: iterator itr_e){
	int sz=distance(itr_b,itr_e);
	if(sz == 1)
		return 0;
		else {
		vector<int> :: iterator itr_mn,itr_last=itr_e,itr_2nd=itr_b,itr_next2mn,itr_beforemn;
		itr_last--;
		itr_2nd++;
		itr_mn=min_element(itr_b,itr_e);
		//cout<<"last "<<*itr_last<<"max "<<*itr_mn<<"2nd "<<*itr_2nd<<"next2max "<<*itr_next2mn<<"\n";
		if(*itr_mn == *itr_b){
			itr_next2mn=itr_mn;
			itr_next2mn++;
			return *itr_next2mn + ans(itr_2nd,itr_e);
			}
		else {
			if(*itr_mn == *itr_last){
			itr_beforemn=itr_mn;
			itr_beforemn=itr_mn--;
			return *itr_beforemn + ans(itr_b,itr_last);
			}
			else {
				itr_beforemn=itr_mn;
			itr_beforemn=itr_mn--;
			itr_next2mn=itr_mn;
			itr_next2mn++;
				return min(*itr_beforemn,*itr_next2mn)+ans(itr_b,itr_mn)+ans(itr_next2mn,itr_e);
			}
		}
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

