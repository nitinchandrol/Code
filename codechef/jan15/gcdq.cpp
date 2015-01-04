#include <iostream>
#include <vector>
using namespace std;

int gcd(int a, int b){
	if(a == b)
		return a;
	if(b == 0)
		return a;
	return gcd(b, a%b);
} 
int main(){
	int t;
	cin >> t;
	int n,q, next;
	cin >> n;
	cin >> q;
	vector<int> v;
	for(int i=0; i < n; i++){
		cin >> next;
		v.push_back(next);
	}
	int first,last,ans;
	bool start;
	for(int i=0; i<q; i++){
		cin >> first;
		cin >> last;
		start = true;
		for(int j=1; j <= n; j++ ){
			if(j< first || j > last){
				if(start){
					ans = v[j - 1];
					start = false;
				}
				else{
					ans = gcd(v[j- 1], ans);
					
				}
			}
		}
		cout << ans << "\n";
	}

}