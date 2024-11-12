#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;

   while(t--){
    ll n;
    cin>>n;

    if((n&(n-1))==0){
        cout<<"NO"<<endl;}
         else{
        cout<<"YES"<<endl;
    }
   }

}
