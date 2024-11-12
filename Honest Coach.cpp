#include<bits/stdc++.h>
#include<limits.h>
#define ll long long int
using namespace std;


 int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
    cin>>n;
    vector<ll>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
       }
       sort(arr.begin(),arr.end());
       int k=INT_MAX;
    for(int i=1;i<=n-1;i++){
            int p=arr[i]-arr[i-1];
        k=min(k,p);
    }
    cout<<k<<endl;
    }
 }
