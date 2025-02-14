#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n;
    cin >> n;

    vector<ll>arr(n);
    for (ll i=0;i<n;i++) {
        cin>>arr[i];
    }

    if(n<3){
        cout<<"NO"<<endl;
        return 0;
    }



    for (ll i=0;i<n;i++) {
        ll p=arr[i]-1;
        ll q=arr[p]-1;
        ll r=arr[q]-1;

        if (r==i){
            cout<<"YES"<<endl;
            return 0;
        }
    }

    cout<<"NO"<<endl;

}
