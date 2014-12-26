#include <iostream>
#include <map>
//it takes a sorted array and checks whether sum is n or not
using namespace std;

struct tuple{
	int first;
	int second;
};

//using pointer
tuple is_sum(int a[], int sz, int n){
	tuple ans;
	ans.first = -1;
	ans.second = -1;
	int mid = -1;
	for(int i=0; i<sz; i++){
		if(a[i] >= n/2){
			mid = i;
			break;
		}
	}
	if(mid == -1 or mid == sz - 1)
		return ans;
	int front = mid, back = mid + 1;
	while(a[front] + a[back] != n){
		if(a[front] + a[back] < n){
			if(back == sz-1)
				return ans;
			back++;
		}
		else{
			if(front == 0)
				return ans;
			front--;
		}
	}
	ans.first = front;
	ans.second = back;
	return ans;
}

//using hash map
tuple is_sum1(int a[], int sz, int n){
	map<int,int> mp;
	tuple ans;
	ans.first = -1;
	ans.second = -1;
	int front ;
	for(int i=0; i< sz; i++){
		mp[a[i]] = 1;
	}
	bool found = 0;
	for(int i=0; i< sz; i++){
		if(mp[n - a[i]]){
			found = 1;
			front = i;
			break;
		}
	}
	if(!found)
		return ans;
	int val =  n - a[front];
	ans.first = front;
	for(int j=0;j<sz; j++){
		if(a[j] == val and j != front){
			ans.second = j;
			return ans;
		}
	}
	return ans;
}

int main(){ 	
	int sz, n, next;
	cin >> sz;
	cin >> n;
	int a[1000];
	for(int i=0; i < sz; i++){
		cin >> next;
		a[i] = next;
	}
	tuple ans = is_sum(a, sz, n);
	tuple ans1 = is_sum1(a, sz, n);
	cout<< ans.first << "\n" << ans.second << "\n";
	cout<< ans1.first << "\n" << ans1.second << "\n";
}






