#include <iostream>
using namespace std;

struct node{
	int val;
	node* next;
};

void push_list(node* &n, int num){
	node* m = new node;
	m->val = num ;
	m->next = n;
	n = m;
}

void print_list(node* &n){
	if(n->next != NULL){
		cout<<n->val <<" ";
		print_list(n->next);
	}
}

void reverse_list(node* &n){
	if(n->next == NULL || n == NULL){
		return;
	}
	else{
		int val = n->val;
		reverse_list(n->next);
		
	}
}

int main(){
	int sz, next;
	cin>> sz;
	node* n = new node;
	for(int i=0; i<sz; i++){
		cin>> next;
		push_list(n, next);
	}
	print_list(n);
}