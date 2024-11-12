#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,p;
    cin>>n>>p;
    for(ll i=1;i<=n;i++){
        if(i%2!=0){
            for(ll j=1;j<=p;j++){
              cout<<"#";
            }
        }else if(i%2==0 && i%4!=0){

               for(ll j=1;j<=p;j++){
              if(j!=p){
                cout<<".";
              }else{
                cout<<"#";
              }
            }
            }
            else if (i%4==0)
            {
            for(ll j=1;j<=p;j++){
              if(j==1){
                cout<<"#";
              }else{
                cout<<".";
              }
            }
            }
cout<<endl;
        }
    }

