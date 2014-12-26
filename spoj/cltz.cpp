#include <iostream>
#include <vector>
using namespace std;
//string is coverted to an array
void str_arry(string s, vector<int> &v){
	int sz = s.size();
	for(int i=0; i<sz; i++){
		v[i] = s[sz - i -1] - '0';
	//	cout<<v[i];
	}
	//cout<<"\n";
}
//function to divide a vector by n, assuming n is single digit;

void divide_vec(vector<int> &v, int n, int &sz){
	int carry = 0,sum;
	for(int i=sz-1;i>=0;i--){
		sum = carry * 10 + v[i];
		v[i] = (sum)/n;
		carry = (sum)%n;
		cout<< v[i];
	}
}

//function to multiply by n
void mult_vec(vector<int> &v, int n, int &sz){
	int carry= 0,sum;
	for(int i= 0; i<sz; i++){
		sum = carry + v[i] * n;
		carry = sum/10;
		v[i] = sum%10;
		cout<<v[i];
	}
	if(carry != 0){
		v[sz] = carry;
		sz = sz + 1;
		cout<< v[sz]; 
	}
	cout<<"\n";
}

int main(){
	string num;
	int ans;
	vector<int> v;
	for(int i=0; i<1888; i++){
		v.push_back(-1);
	}
	while(cin >> num){
		ans = 1;
		int sz = num.size(),last;
		str_arry(num,v);

		/*while(sz != 1 or v[sz - 1] != 1){
			last = v[sz - 1];
			if(last %2 == 0){
				//divide by 2
				divide_vec(v,2,sz);
				if(v[sz -1] == 0)
				sz = sz - 1
			}
			else{
				//3*v + 1
			}
			ans++;
		}*/
	}
}