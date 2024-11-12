#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s1,s2;
        ll n;
        cin>>n;

        cin>>s1>>s2;
        ll q=s1.size();

        for(ll i=0;i<q;i++){
            if(s1[i]=='B')
                s1[i]='G';
        }
        for(ll i=0;i<q;i++){
            if(s2[i]=='B')
                s2[i]='G';
        }

        if(s1==s2)
            cout<<"YES"<<endl;
        else
             cout<<"NO"<<endl;
    }
}
