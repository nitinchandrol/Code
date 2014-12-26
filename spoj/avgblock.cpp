#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

void print_6(int n,int d){
	int count = 6;
	while(count != 0 and n != 0){
		if(count == 6)
			cout<<".";
		if(count == 1 and ((n*10)%d)*10/d >= 5){
			cout<<((n * 10)/d) + 1;
		}
		else{
			cout<<(n * 10)/d;
		}
		count--;
		n = (n * 10)%d;
	}
}

int main(){
	int n,count,sz;
	char last; 
	//decimal<6> ans;
	//cout << setprecision(6);
	double ans;
	cin >> n;
	string s;
	for(int i=0; i<n; i++){
		cin>> s;
		last = s[0];
		count = 1;
		for(int j=1; j<s.size(); j++){
			if(s[j] != last){
				last = s[j];
				count ++ ;				
			}
		}
		sz = s.size();
		ans = 1.0*sz/count;
		cout<<ans;
		//print_6(sz - count * ans,count);
		cout<<"\n";
	}
}