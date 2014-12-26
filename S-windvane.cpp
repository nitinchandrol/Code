#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
using namespace std;

int main(){
	int m,n,input,x1,y1,x2,y2,d,ans;
	int grid[1001][1001];
	int incr[1001][1001];
	char temp;
	cin>>m;
	cin>>n;
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			cin>>temp;
			if(temp == 'N') grid[i][j]=0;
			if(temp == 'E') grid[i][j]=1;
			if(temp == 'S') grid[i][j]=2;
			if(temp == 'W') grid[i][j]=3;
		}
	}
	cin>>input;
	for(int i=1;i<=1000;i++){
				for(int j=1;j<=1000;j++){
					incr[i][j]=0;
				}
			}
	for(int k=0;k<input;k++){
		cin>>temp;
		if(temp == 'C'){
			cin>>x1;
			cin>>y1;
			cin>>x2;
			cin>>y2;
			cin>>d;
			for(int i=x1;i<=x2;i++){
				for(int j=y1;j<=y2;j++){
					if(d == 1)incr[i][j]--;
					else incr[i][j]++;
				}
			}
		}
		else {
			cin>>x1;
			cin>>y1;
			ans= (grid[x1][y1]+incr[x1][y1]+40000)%4;
			if(ans == 0) cout<<"N\n";
			if(ans == 1) cout<<"E\n";
			if(ans == 2) cout<<"S\n";
			if(ans == 3) cout<<"W\n";
		}
	}
}
