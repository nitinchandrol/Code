#include <iostream>
#include <math.h>
using namespace std;

/*int fun(int n){
	if(i == 0)return 1;
	if(i == 1)return 1;
	int ans=0;
	for(int i=0;i<n;i++){
		ans = ans + fun[i]*fun[n-i];
	}
	return ans;
}*/

int main(){
	int test,num,sz,ans,itr;
	char c;
	string s;
	cin>>test;
	for(int i=0;i<test;i++){
		cin>>s;
		sz=s.size();
		ans=1;
		itr=1;
		c = s[0];
		for(int j=1;j<sz;j++){
			if(s[j] == c)
				itr++;
			else{
				ans=ans*pow(2.0,itr-1.0);
				itr=1;
				c=s[j];
			}
		}
		ans=ans*pow(2.0,itr-1.0);
		cout<<ans<<"\n";
	}
}
