#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
      ll t;
      cin>>t;

      while(t--){
          ll n,s=0;
          cin>>n;
          ll arr[n];
          for(ll i=0;i<n;i++){
             cin>>arr[i];
          }
          if(n==1){
             cout<<arr[0]<<endl;
          }
          else{
             for(ll i=0;i<n;i++){
                 s=s+arr[i];
                 s=s-1;
             }
             cout<<s+1<<endl;
          }

      }
}
