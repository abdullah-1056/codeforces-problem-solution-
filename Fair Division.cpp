#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){

    ll n;
    cin>>n;
     ll r=0,o=0,m;
    for(ll i=0;i<n;i++){
        cin>>m;
        if(m==2)
            r++;
        else
            o++;
    }
    ll x=r*2+o;
   if(x%2==0){
    if((r==0 && o%2==0) || (o==0 && r%2==0) || (o%2==0 && r%2==0) || (r%2!=0 && o%2==0 && o!=0)){
        cout<<"YES"<<endl;}
     else
        cout<<"NO"<<endl;

   }

    else
        cout<<"NO"<<endl;
   }
}
