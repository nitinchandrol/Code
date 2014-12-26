#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <stdlib.h>
using namespace std;
int md(int a,int b){
	int c=a/b;
	return a-(c*b);
}
int main(){
    int t,sz,ans,a=1000000007;
    vector<int> sum;
    cin>>t;
    string s;
    //cin>>s;
    //cout<<"s "<<s<<"\n";
    while(t--){
        cin>>s;
        //cout<<"s "<<s<<"\n";
        sz=s.size();
        if(sz == 0)cout<<1<<"\n";
        else{
        ans=1;
        map<char,int> mp;
        sum.clear();
        sum.push_back(0);
        sum.push_back(1);
        mp[s[0]]=1;
        for(int i=2;i<=sz;i++){
            sum.push_back(abs(md((2*sum[i-1]+1-sum[mp[s[i-1]]]),a)));
            mp[s[i-1]]=i;
            //cout<<"i is"<<i<<" sum[i] is "<<sum[i]<<"\n";
        }
        cout<<abs(md((sum[sz]+1),a))<<"\n";
        }
    }
}

