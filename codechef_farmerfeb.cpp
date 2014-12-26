#include <iostream>
#include <math.h>
using namespace std;

bool prime(int n){
    if(n == 2) return true;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0)return false;
    }
    return true;
}

int next_prime(int n){
	if(prime(n))return n;
	next_prime(n+1);
}

int main(){
	int t,x,y;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>x;
		cin>>y;
		cout<<next_prime(x+y+1)-x-y<<"\n";
	}
}

