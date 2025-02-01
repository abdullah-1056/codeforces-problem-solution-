#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(28>=n){
            ll p=(n-2)+96;
            cout<<"a"<<"a"<<(char)p<<endl;
        }
        else if(n>28 && n<=53){
            ll p=(n-27)+96;
            cout<<"a"<<(char)p<<"z"<<endl;
        }
         else if(n>53 && n<=78){
            ll p=(n-52)+96;
            cout<<(char)p<<"z"<<"z"<<endl;
        }
    }

}
