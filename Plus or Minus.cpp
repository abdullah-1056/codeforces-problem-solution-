
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll a,b,c,p,m;
    cin>>a>>b>>c;
    p=a+b;
   m=a-b;
    if(p==c){
        cout<<"+"<<endl;
    }else if(m==c){
        cout<<"-"<<endl;
    }
}

int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        solve();
    }
}
