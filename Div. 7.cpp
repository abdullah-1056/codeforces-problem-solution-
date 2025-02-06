#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){

    ll n;
    cin>>n;

    if(n%7==0){
        cout<<n<<endl;

    }
    else{
            n=10*(n/10);
        for(ll i=0;i<10;i++){


        if(n%7==0){
            cout<<n<<endl;
            break;
        }
        else{
            n++;
        }
    }
    }
}}
