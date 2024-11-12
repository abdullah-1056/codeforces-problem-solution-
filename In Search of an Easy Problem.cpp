#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    vector<ll>v;
   ll n,ctr=0;
   cin>>n;
   for(int i=0;i<n;i++){
    ll x;
    cin>>x;
    v.push_back(x);
    if(v.back()==1){
    ctr++;

   }

     }
   if(ctr) cout<<"HARD"<<endl;
   else cout<<"EASY"<<endl;

}
