#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

   ll a,b,c,x;
   vector<ll>v;
   for(ll i=0;i<4;i++){
        cin>>x;
    v.push_back(x);
   }
   sort(v.begin(),v.end(),greater<ll>());
  a=v[0]-v[1];
  b=v[0]-v[2];
  c=v[0]-v[3];
  cout<<a<<" "<<b<<" "<<c<<endl;
}
