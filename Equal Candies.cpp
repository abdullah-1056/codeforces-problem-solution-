#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll t;
  cin>>t;

  while(t--){
    ll n,c=0;
    cin>>n;

     vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    ll x=v[0];


     for(ll i=0;i<n;i++){
       c+=v[i]-x;
    }
    cout<<c<<endl;

  }
}
