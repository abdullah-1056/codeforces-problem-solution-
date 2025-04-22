#include<bits/stdc++.h>
#define ll long long int 
using namespace std;
int main(){
    ll t;
    cin>> t;
    while (t--){
        ll n,p=0;
        cin>>n;

       vector<ll>v(n);
    
       for(ll i=0;i<n;i++){
          cin>>v[i];
       }

        sort(v.begin(),v.end());
          
    for(ll i=0;i<n-1;i++){
         if(v[i]==v[i+1]){
              p++;
              break;
         }
            
      }
      if(p==1){
         cout<<"NO"<<endl;
      }else{
         cout<<"YES"<<endl;
      }
    }
    
}