#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll x;
   ll arr[3];

   for(ll i=0;i<3;i++){
    cin>>x;
    arr[i]=x;
   }
   sort(arr,arr+3);

   ll m=0,n=0;

   m=arr[1]-arr[0];
   n=arr[2]-arr[1];

   cout<<m+n;
}
