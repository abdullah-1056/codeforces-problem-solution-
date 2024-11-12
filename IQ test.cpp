#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll n,z=0,p=0;
   ll x=0,y=0,q=0;
   cin>>n;
   ll arr[n];
   for(ll i=0;i<n;i++){
    cin>>arr[i];

    if(arr[i]%2==0){
    x++;
   }else{
     y++;
   }
   }


   if(x==1){
    for(ll i=0;i<n;i++){
    if(arr[i]%2!=0){
    z++;

   }
    else {
    z++;
     p++;
    if(p==1){
    cout<<z;
}
   }
   }
}
   if(y==1){
    for(ll i=0;i<n;i++){
    if(arr[i]%2==0){
    z++;
   }
   else {
    z++;
    p++;
     if(p==1){
    cout<<z;
   }
   }
   }
   }
   }

