#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a;
        cin>>a;
        ll c=0;
        while(a>=2050){
            c++;
            ll x=2050;
            while(x<=a){
                x*=10;
            }
            x/=10;
            a=a-x;
        }
        if(a==0)
            cout<<c<<endl;
        else
            cout<<"-1"<<endl;
    }
}
