#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
     cin>>t;
   while(t--){
    ll n,s1=0,s2=0;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0){
            s1+=v[i];
        }
        else {
            s2+=v[i];
        }
    }

    if(s1%2==0 && s2%2==0){
        cout<<"YES"<<endl;
    }
    else if(s1%2!=0 && s2%2!=0)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;
   }

}
