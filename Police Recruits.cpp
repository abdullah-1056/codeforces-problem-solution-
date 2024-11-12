#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,p=0,c=0;
    cin>>n;

    vector<ll>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }

    for(ll i=0;i<v.size();i++){
         if(v[i]>=1){
            p+=v[i];
         }
         else{
            if(p<1){
              c++;
            }else{
               p--;
            }

         }
        }
cout<<c<<endl;
    }
