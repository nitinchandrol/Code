#include <iostream>
#include <math.h>
using namespace std;
int sqr_last(int i){
	int ans;
	if(i == 0)ans=0;
	if(i == 1 || i == 9 || i == 3 || i == 7)ans=1;
	if(i == 4 || i == 6 || i == 2 || i == 8)ans=6;
	if(i == 5)ans=5;
	return ans; 
}
int main(){
	int n,a,b,ans;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		cin>>b;
		ans=1;
		a=a%10;
		if(b == 0)cout<<"1\n";
		else{
		while(b >= 4){
			b=b/4;
			ans=ans*pow(a,b%4);
			ans=ans%10;
			a=sqr_last(a);
		}
		ans=ans*pow(a,b);
		cout<<ans%10<<"\n";
	}
	}
}
