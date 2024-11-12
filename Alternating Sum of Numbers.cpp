#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,c=0;
        cin>>a;

        vector<ll>v(a);
        for(ll i=0;i<a;i++){
            cin>>v[i];

            if(i%2==0)
                c+=v[i];
            else
                c-=v[i];
        }
        cout<<c<<endl;
    }
}
