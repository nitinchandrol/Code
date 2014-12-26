#include<iostream>
#include<cmath>
using namespace std;
double mod(double x){
    if(x >= 0) return x;
    else return -x;
    }
int main(){
    long long x1,x2,x3,n,t;
    cin>>t;
    for(int j=0;j<t;j++){
    cin>>x1;
    cin>>x2;
    cin>>x3;
    double den=x1+x2,b=(7*x1/den)+(5*x2/den)+(2*x3/den),c=(12*x3/den);
    double k=sqrtl(b*b-4*c),ans2=(b+k)/2,ans1=(b-k)/2;
    int a1=ans1,a2=ans2;
    cout<<"ans1 "<<ans1<<"ans2 "<<ans2<<" ";
   bool found=true;
    if(min(a1+1-ans1,ans1-a1)>min(a2+1-ans2,ans2-a2) ){
        if(ans2-a2< 0.5){
                //cout<<"a2 "<<a2<<" ";
                if(a2>= 7 && (x1+((a2-3)*(x2-x1))/(a2-6) >0 && x1-2*(x2-x1)/(a2-6) >0)){
                        n=a2;
                        found=false;
                }
        }
        else {
                if(a2>= 6 && (x1+((a2-2)*(x2-x1)/(a2-5)) >0 && x1-2*(x2-x1)/(a2-5) >0)){
                        n=a2+1;
                        found=false;
                }
    }
    }
    if(found){
        if(ans1-a1 < 0.5)n=a1;
        else n=a1+1;
    }
    long long d=(x2-x1)/(n-6),a=x1-2*d;
    //cout<<"a "<<a<<"d "<<d<<" ";
    //cout<<n<<"\n";
    for(int i=0;i<n;i++)
        cout<<a+i*d<<" ";
        cout<<"\n";
    }
    }


