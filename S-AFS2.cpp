#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int t,q;
    long long ans,next;
    cin>>t;
    for(int m=0;m<t;m++){
        cin>>next;
        ans=next-1;
        for(int p=2;p<=sqrt(next);p++){
            ans=ans+((next/p)-1)*p;
		}
        cout<<ans<<"\n";
    }
}

