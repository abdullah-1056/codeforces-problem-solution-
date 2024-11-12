
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){
     ll o=0,e=0;
    ll n;
    cin>>n;

    ll x=n/2;
    if(x%2==0){
            cout<<"YES"<<endl;



    for(ll i=1;i<=x;i++){
        cout<<i*2<<" ";
        e+=i*2;
        }


    for(ll j=1;j<x;j++){
            cout<<j*2-1<<" ";
        o+=(j*2-1);
    }
    cout<<e-o<<endl;
    }
   else
      cout<<"NO"<<endl;
}
}
