#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c=0;
        cin>>n;

        string s=to_string(n);
        for(ll i=0;i<s.size();i++){
            if(s[i]!='0'){
                c++;
            }
        }
        cout<<c<<endl;

        if(n%10!=0){
            cout<<n%10<<" ";
            n-=(n%10);
        }
        if(n%100!=0){
            cout<<n%100<<" ";
            n-=(n%100);
        }
        if(n%1000!=0){
            cout<<n%1000<<" ";
            n-=(n%1000);
        }
        if(n%10000!=0){
            cout<<n%10000<<" ";

        }
        if(n>=10000 && n%10000==0){
            cout<<n;
        }
        cout<<endl;
    }
}
