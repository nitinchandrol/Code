#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool prime(int n){
    if(n == 2) return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0)return false;
    }
    return true;
}

int main(){
	vector<int> prme;
	vector<int> p_bool;
	int l=10000000,itr;
	for(int i=0;i<=l;i++)
	p_bool.push_back(true);
	prme.push_back(1);
	for(int i=2;i<=l;i++){
		itr=1;
		if(p_bool[i]){
			prme.push_back(i);
			while(itr*i<=l){
				p_bool[itr*i]=false;
				itr++;
			}
		}
	}
	int num,p;
	while(cin>>num){
		cout<<"1 ";
		itr=1;
		while(num != 1){
			p=prme[itr];
			if(num%p == 0){
				num=num/p;
				cout<<"* "<<p<<" ";
			}
			else itr++;
		}
		cout<<"\n";
	}
}
