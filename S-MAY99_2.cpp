#include <iostream>
#include <algorithm>
#include <inttypes.h>
using namespace std;
char mp(int i){
	if(i == 1)return 'm';
	if(i == 2)return 'a';
	if(i == 3)return 'n';
	if(i == 4)return 'k';
	if(i == 0)return 'u';
}
int main(){
	uint64_t n;
	int t;
	string s;
	char temp;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		while(n != 0){
			temp = mp(n%5);
			s+=temp;
			n=(n/5);
		}
		//reverse(s.begin(),s.end());
		cout<<s<<"\n";
		s.empty();
	}
}
