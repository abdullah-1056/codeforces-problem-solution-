#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,s=0,o=0,e=0;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
       s=s+v[i];
        if(v[i]%2==0) e++;
        else o++;
    }
     if(s%2!=0){
        cout<<"YES"<<endl;
     }
    else if(o>=1 && e>=1){
        cout<<"YES"<<endl;
     }
     else{
       cout<<"NO"<<endl;
     }

  }
}
