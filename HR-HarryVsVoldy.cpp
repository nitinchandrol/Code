#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<long long int> damage;
int n;
long long int including[100000];
long long int excluding[100000];
bool ib[100000];
bool eb[100000];
long long int findI(int i);
long long int findE(int i);

long long int findI(int i){
    if(ib[i])return including[i];
    long long int ans;
    ans = damage[i] + findE(i+1);
    ib[i] = true;
    including[i] = ans;
    return ans;
}

long long int findE(int i){
    if(eb[i])return excluding[i];
    long long int ans;
    ans = max(findI(i+1), findE(i+1));
    eb[i] = true;
    excluding[i] = ans;
    return ans;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    long long int next,ans;
    
    cin >> t;
    //scanf("%d", &t);
    while(t--){
        //cin >> n;
        //cout << t << "\n";
        scanf("%d", &n);
        damage.clear();
        for(int i=0; i<n; i++){
            //cin >> next;
            scanf("%lld", &next);
            damage.push_back(next);
        }
        for(int i=0; i<n-1; i++){
            ib[i] = false;
            eb[i] = false;
        }
        ib[n-1] = true;
        eb[n-1] = true;
        including[n-1] = damage[n-1];
        excluding[n-1] = 0;               
        for(int i=n-2; i>=0; i--){
        	findI(i);
        	findE(i);
        }
        
        ans = max(findI(0), findE(0));
        if(ans > 0)printf("%lld\n",ans);
        else printf("DANGER\n");
    }
    return 0;
}
