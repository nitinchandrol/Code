#include <iostream>
#include <string>
using namespace std;
main(){
	int i=0,j,a;
	string s;
	for(,i<10,i++){
		a=1;
		cin>>s;
		j=0;
		for(j=0,j< s.length(),j++){
			if(s[j] == 'K' || s[j] == 'G')a=a*2;
			if(s[j] == 'R')a=a*3;
		}
		cout<<a<<"\n";
	}
}
