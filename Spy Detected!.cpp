#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){

    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    for(ll i=0;i<n;i++){
        if((v[i]!=v[i+1]) &&(v[i]!=v[i+2])){
            cout<<i+1<<endl;
            break;
        }


        else if((v[i]==v[i+1]) &&(v[i]!=v[i+2])){
            cout<<i+3<<endl;
            break;
        }


       else if((v[i]!=v[i+1]) &&(v[i]==v[i+2])){
         cout<<i+2<<endl;

        break;
       }

    }

   }
}
