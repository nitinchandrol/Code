#include <iostream>
#include <vector> 
using namespace std;
std::vector<int> v,v_dum;

void merge_sort(int i, int j){
	int k = (i+j)/2;
	if(k != i and k != j){
		merge_sort(i, k);
		merge_sort(k, j);
		int dum1=i,dum2=k,count=i;
		for(int m=i; m<j; m++){
			v_dum[m] = v[m]; 
			//cout<< "n " <<v[m] <<"\n";
		}
		while(dum1 != k and dum2 != j){
			if(v_dum[dum1] < v_dum[dum2]){
				v[count] = v_dum[dum1];
				count++;
				dum1++;
			}
			else{
				v[count] = v_dum[dum2];
				count++;
				dum2++;
			}
		}
		while(dum1 != k and dum2 == j){
			v[count] = v_dum[dum1];
			count++;
			dum1++;
		}
		while(dum1 == k and dum2 != j){
			v[count] = v_dum[dum2];
			count++;
			dum2++;
		}
	}

}

int main(){
	int n,next;
	cin>> n;
	for(int i=0; i<n; i++){
		cin>> next;
		v.push_back(next);
		v_dum.push_back(next);
		
	}
	merge_sort(0,n);
	for(int i=0; i<n; i++){
		cout<< v[i]<<" ";
	}
}