#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll n,q=1,p=0;
    cin>>n;

    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    if(n==1){
        cout<<"1";
        return 0;
    }

    for(ll i=0;i<n-1;i++){

        if(arr[i]<=arr[i+1]){
            q++;
        }else{
            p=max(p,q);
            q=1;
        }
    }

    p=max(p, q);
    cout << p;
}
