#include <iostream>
using namespace std;
int main(){
	int n,second,j;
	cin>>n;
	double x[n],y[n],sumx=0,sumy=0,val0,valm,slope;
	for(int i=0;i<n;i++){
		cin>>x[i];
		sumx=sumx+x[i];
		cin>>y[i];
		sumy=sumy+y[i];
	}
	sumx=sumx/n;
	sumy=sumy/n;
	for(j=0;j<n;j++){
		second=(j+1)%n;
		slope=(y[second]-y[j])/(x[second]-x[j]);
		val0=-y[j]+slope*x[j];
		valm=(sumy-y[j])-slope*(sumx-x[j]);
		if(val0 * valm < 0)break;
	}
	if(j<n)cout<<"outside";
	else cout<<"inside";
}
