#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll t;
  cin>>t;
  while(t--){
    ll s=0;
    ll n,a,b,c,q=0;
    cin>>n>>a>>b>>c;

     ll sum=a+b+c;
     ll f=n/sum;
     ll r=n%sum;

     if(r==0){
        cout<<3*f<<endl;
     }

        else{
            if(r>0){
               s+=a;
               q++;}
             if(r>s){
                s+=b;
                q++;}
             if(r>s){
                s+=c;
                q++;}

    cout<<3*f+q<<endl;
        }

  }
}
