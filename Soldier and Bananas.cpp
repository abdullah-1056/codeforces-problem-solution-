#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll k,w,n,d,sum=0;
   cin>>k>>n>>w;
   for(ll i=1;i<=w;i++){
    sum += (i*k);
   }
   d=sum-n;
   if(d>0){
    cout<<d;
   }
   else{
    cout<<"0";
   }
}
