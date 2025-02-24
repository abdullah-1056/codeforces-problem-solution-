#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    char x;
    while(t--){

        for(ll i=0;i<8;i++){
           for(ll j=0;j<8;j++){
               cin>>x;
                if(x!='.'){
               cout<<x;
                 }
           }
        }
        cout<<endl;
    }
}






