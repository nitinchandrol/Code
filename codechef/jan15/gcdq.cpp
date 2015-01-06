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
	int n,q, next, i, j;
	int first,last,ans;
	bool start;
	vector<int> v;
	for(int k=0; k<t; k++){
		cin >> n;
		cin >> q;
		for(i=0; i < n; i++){
			cin >> next;
			v.push_back(next);
		}
		
		for(i=0; i<q; i++){
			cin >> first;
			cin >> last;
			start = true;
			for(j=1; j <= n; j++ ){
				if(j< first || j > last){
					if(!start){
						ans = gcd(v[j- 1], ans);
					}
					else{
						ans = v[j - 1];
						start = false;
					}
				}
			}
			cout << ans << "\n";
		}
		v.clear();
		cout << "\n";
	}
}