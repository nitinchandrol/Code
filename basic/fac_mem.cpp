#include <iostream>
#include <vector> 
using namespace std;
std::vector<int> v;
long fact1(int n){
	if(n == 0 || n == 1)
		return 1;
	else{
		return fact1(n-1) + fact1(n-2);
	}
}

long fact(int n){
	long ans,ans1,ans2; 
	if(n == 0 || n == 1){
		v[n] = 1;
		return 1;
	} 
	else{
		if(v[n-2] == -1)
			v[n-2] = fact(n-2);
		if(v[n-1] == -1)
			v[n-1] = fact(n-1);
		v[n] = v[n-1] + v[n-2];
		return v[n];
	}

}

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		v.push_back(-1);
	}
	cout<< fact(n)<< "\n";
	cout<< fact1(n)<< "\n";
}