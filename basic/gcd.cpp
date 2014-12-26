#include <iostream>
 
using namespace std;
int gcd(int a, int b){
	//base case
	if(b == 0) 
		return a;
	if(a == 0) 
		return b;
	if(a == b)
		return a;
	else {
		return gcd(b,a%b);
	}
}

int main(){
	int a,b;
	cin >> a;
	cin >> b;
	cout << gcd(a,b) << "\n";		
}
