#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll t;
   cin>>t;
   while(t--){
      ll n;
      cin>>n;
      ll s=0;
      ll arr[9];

      for(ll i=9;i>0;i--){
        if(i<=n){
            n=n-i;
            arr[s]=i;
         s++;
        }
      }
       for(ll i=s-1;i>=0;i--){
            cout<<arr[i];
        }
        cout<<endl;

   }
}
