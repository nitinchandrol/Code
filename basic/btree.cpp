#include <iostream>
#include <vector> 
using namespace std;

struct tree
{
	int i;
	tree* rt;
	tree* lt;
	/*tree(){
		rt = NULL;
		lt = NULL;
	}*/
};

void insert_tree(tree* &t,int i){
	if(t == NULL){
		t = new tree;
		t->i = i;
		t->rt = NULL;
		t->lt = NULL;
	}
	else{
		if(t->i > i)
			insert_tree(t->lt,i);
		else {
			insert_tree(t->rt,i);
		}
	}
}


void print(tree* t){
	if(t != NULL){
		cout << t->i;
		print(t->lt);
		print(t->rt);
	}
}

int main(){
	int n, next;
	cin >> n;
	tree* t = NULL;
	std::vector<int> v;
	for(int i=0; i<n; i++){
		cin >> next;
		insert_tree(t,next);
		v.push_back(next);
	}
	print(t);
}