#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll n,c=0;
   cin>>n;
   ll arr[n];

   for(ll i=0;i<n;i++){
    cin>>arr[i];
   }

    for(ll i=0;i<n;i++){
       if(arr[i]!=arr[i+1]){
          c++;
       }
   }
   cout<<c<<endl;
}
