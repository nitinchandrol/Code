	#include <iostream>
	using namespace std;
	int main(){
		int t,r,c,m,d;
		cin>>t;
		for(int i=0;i<t;i++){
			cin>> r;
			cin>> c;
			cin>> m;
			cout<<"Case #";
			cout<<i+1<<":\n";
			
			
			if(r == 1){
				d = m;
				for(int j=0;j<c-1;j++){
					if(j < d){
						cout<<"*";
						d--;
					}
					else {
						cout<<".";
					}
					cout<<"c"<<"\n";
				}
			}
			else {
				if(c == 1){
					d = m;
					for(int j=0;j<r-1;j++){
						if(j < d){
							cout<<"*\n";
							d--;
						}
						else {
							cout<<".\n";
						}
					}
						cout<<"c"<<"\n";
				}
				else {
					if(r*c - m < 4)
						cout<<"Impossible\n";
					else {
						for(int j=0;j<r;j++){
							for(int k=0;k<c;k++){
								if(m != 0){
									m--;
									cout<<"*";
								}
								else{
									if(j == r-1 && k == c-1)cout<<"c";
									else cout<<".";
								}
							}
							cout<<"\n";
						}
					}
				}
			}
		}
	}
	
