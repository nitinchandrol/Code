#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main(){
	int t,n,temp,temp1;
	cin>>t;
	int freq[1001];
	for(int i=0;i<t;i++){
		cin>>n;
		temp1=0;
		for(int j=0;j<1001;j++){
			freq[j]=0;
		}
		for(int k=0;k<n;k++){
			cin>>temp;
			freq[temp]++;
		}
		for(int m=0;m<n;m++){
			if(freq[m]+freq[n-1-m] != 2){
				temp1=1;
				break;
			}
		}
		if(temp1 == 1)cout<<"NO\n";
		else cout<<"YES\n";
	}
}
