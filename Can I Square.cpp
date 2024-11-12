#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sqrt(n) sqrtl(n)
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll n;
    cin>>n;
    ll a;
    ll sum=0;
    for(ll j=0;j<n;j++){
        cin>>a;
        sum += a;
    }

    ll l=sqrt(sum);
    if(l*l==sum)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
   }
}
