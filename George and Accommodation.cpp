#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll n,p,q;
  cin>>n;
    ll x,c=0;
   for(ll i=0;i<n;i++){
    cin>>p>>q;
      x=q-p;

      if(x>=2)
        c++;
   }
   cout<<c;
}
