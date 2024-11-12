#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s1;
        string s2;
        s1="codeforces";
        cin>>s2;
        ll n=10;
        ll p=0;
        for(ll i=0;i<n;i++){
            if(s1[i]!=s2[i]){
               p++;
            }
        }
        cout<<p<<endl;
    }
 }
