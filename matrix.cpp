	#include <iostream>
	#include <stdlib.h>
	#include <math.h>
	using namespace std;
	int main () {
	   float A[20][20], B[20], X[20];
	   int n;
	   cout<<"how many rows or columns in coefficient matrix: ";
	   cin>>n;
	cout<<"give the matrix of coefficients"<<endl;
	for(int i=0;i<n;i++){
	   for(int j=0;j<n;j++){
	       cin>>A[i][j];
	       cout<<A[i][j]<<" ";
	   }
	   cout<<endl;
	}
	cout<<"what is b matrix"<<endl;
	for(int i=0;i<n;i++){
	   cin>>B[i];
	   cout<<B[i]<<" "<<endl;
	}
	for(int i=0;i<n-1;i++){
	   for(int j=0;j<n;j++){
	       A[i+1][j] = A[i+1][j] - A[i][j]*A[i+1][i+1]/A[i][i];
	      // B[i+1] = B[i+1] - B[i]*A[i+1][i+1]/A[i][i];
	   }
	   B[i+1] = B[i+1] - B[i]*A[i+1][i+1]/A[i][i];
	}
	X[n-1] = B[n-1] / A[n-1];
	cout<<X[n-1];
	for(int i=n-2;i>=0;i--){
	       float temp = 0;
	   for(int j=n-1;j<i;j--){
	       //int temp = 0;
	       temp = temp + A[i][j]*X[j];
	   }
	   X[i] = B[i] - temp/A[i][i];
	cout<<X[i]<<endl;
	}
	return 0;
	}
	
