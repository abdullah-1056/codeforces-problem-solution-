#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,s=0,s1=0;
        cin>>n;
        ll ar[n];
        for(ll i=0;i<n;i++){
            cin>>ar[i];
            if(ar[i]<=0){
                s=s+ar[i];
            }
            else{
                s1=s1+ar[i];
            }
        }
        cout<<s1+(-s)<<endl;
    }
}
