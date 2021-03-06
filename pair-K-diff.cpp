#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<math.h>

using namespace std;
int k;
int cross_ans(vector<int> :: iterator itr_b1,vector<int> :: iterator itr_e1,vector<int> :: iterator itr_b2,
vector<int> :: iterator itr_e2){
	int ans=0;
	vector<int> :: iterator temp1=itr_b1,temp2=itr_b2;		
	while(temp1 != itr_e1 && temp2 != itr_e2){
		if(*temp2 - *temp1 == k){
			ans=ans+1;
			temp1++;
			temp2++;
			}
		else
			if(*temp2  > *temp1 + k) temp1++;
			else temp2++;
		}
		temp1=itr_b1,temp2=itr_b2;
	while(temp1 != itr_e1 && temp2 != itr_e2){
		if(*temp1 - *temp2 == k){
			ans=ans+1;
			temp1++;
			temp2++;
			}
		else
			if(*temp1  > *temp2 + k) temp2++;
			else temp1++;
		}	
		return ans;
}

int ans(vector<int> :: iterator itr_b,vector<int> :: iterator itr_e){
	int sz =distance(itr_b,itr_e);
	if(sz == 1) return 0;
	if(sz == 2){
		vector<int> :: iterator itr_b2=itr_b;
		itr_b2++; 
		if(*itr_b - *itr_b2 == k || *itr_b2 - *itr_b == k){
			sort(itr_b,itr_e);
			return 1;
		}
		else {
			sort(itr_b,itr_e);
			return 0;
		}
	}
	else {
		vector<int> :: iterator itr_m1=itr_b;
		advance(itr_m1,(sz/2));
		int ans1,ans2,ans3;
		ans1=ans(itr_b,itr_m1);
		ans2=ans(itr_m1,itr_e);
		ans3=cross_ans(itr_b,itr_m1,itr_m1,itr_e);
		sort(itr_b,itr_e);
		//cout<<"sz "<<sz<<" ans1 "<<ans1<<" ans2 "<<ans2<<" ans3 "<<ans3<<"\n";
		return ans1+ans2+ans3;
	}
}

///////////////
int main(){
	int sz,tmp;
	cin>>sz;
	cin>>k;
	vector<int> v;
	for(int i=0;i<sz;i++){
	cin>>tmp;
	v.push_back(tmp);
	}
	/*sort (v.begin(),v.end());
	vector<int> :: iterator itr=v.begin();
	vector<int> :: iterator temp= v.begin(),temp1=temp;
	advance(temp1,1);
	cout<<*temp1<<" "<<*temp<<"\n";*/
	cout<<ans(v.begin(),v.end())<<"\n";
}

