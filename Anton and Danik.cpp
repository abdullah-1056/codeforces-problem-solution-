#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin>>n;
    vector<char>v(n);
    ll a=0,d=0;
    for(ll i=0;i<n;i++){
        cin>>v[i];
        if(v[i]=='A'){
            a++;
        }
       else {
            d++;
        }
    }
    if(a>d){
        cout<<"Anton"<<endl;
    }
    else if(d>a){
        cout<<"Danik"<<endl;
    }
    else if(a==d){
        cout<<"Friendship"<<endl;
    }
}
