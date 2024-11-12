#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
   ll tc;
   cin>>tc;
   while(tc--){
    ll n,m=0,p=0;
    cin>>n;
   vector<char>v(n);
   for(ll i=0;i<n;i++){
    cin>>v[i];}
    for(ll i=0;i<n;i++){
    if(v[i]=='-'){
        m++;
    }else{
      p++;
    }
   }
   if(p>m){
    cout<<p-m<<endl;
   }else if(m>p){
      cout<<m-p<<endl;
   }else{
      cout<<"0"<<endl;
   }
   }
}
