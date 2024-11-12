#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,w=0;
        cin>>n;
        int arr[n];
        int q[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
            q[i]=arr[i];
        }
        sort(q,q+n);
        for(ll i=0;i<n;i++){
            if(q[i]==arr[i]){
                w++;
            }
        }
        if(n==w){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}
