#include <iostream>
#include <vector>
using namespace std;
long long int mod = 1000000000;
long long int M[60][4][4] = {{{3,2,2,3},{1,0,0,0},{0,0,1,2},{0,0,1,0}}};
long long int pro[4][4];

void productA(long long int n){
    long long int sum;
    for(int i=0 ;i<4; i++){
        for(int j=0; j<4; j++){
            sum = 0;
            for(int k=0; k<4; k++){
                sum = (sum + M[n-1][i][k]*M[n-1][k][j])%mod;
            }
              M[n][i][j] = sum;
        }
    }
}

void proA(int n){
    long long int sum = 0;
    long long int store[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            sum = 0;
            for(int k=0; k<4; k++){
                sum = (sum + pro[i][k]*M[n][k][j])%mod;
                //cout << "sum is " << pro[i][k] << " " << M[n][k][j] << " " << sum << "\n";
            }
            store[i][j] = sum;
        }
    }
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            pro[i][j] = store[i][j];       
        }
    }
    
}


int main()
{
   long long int f0, f1, g0, g1, f2, g2;
   long long int n,num;
   cin >> f1 >> f0 >> g1 >> g0;
   cin >> n;
   if(n == 1)cout << f1;
   else{
	   vector<int> binary;
       num = n-1;
       while(num != 0){
           if(num%2 == 1){
               binary.push_back(1);
           }
           else{
               binary.push_back(0);
           }
           num = num/2;
       }
       
       for(int i=0; i<4; i++){
           for(int j=0; j<4; j++){
               pro[i][j] = 0;
               if(i == j)pro[i][j] = 1;
           }
       }
       //cout << "size " << binary.size() << "\n";
       for(int i=0; i<binary.size(); i++){
           if(i>0)productA(i);
           if(binary[i] == 1)proA(i);
           /*
           for(int j=0; j<4; j++){
               for(int k=0; k<4; k++){
                   cout << M[i][j][k] << " ";
               }
               cout << "\n";
           }
           cout << "\nPro\n";
           for(int j=0; j<4; j++){
               for(int k=0; k<4; k++){
                   cout << pro[j][k] << " ";
               }
               cout << "\n";
           }*/
           
       }
       cout << (f1 * pro[0][0] + f0 * pro[0][1] + g1 * pro[0][2] + g0 * pro[0][3])%mod;
   }
   return 0;
}
