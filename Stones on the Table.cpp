#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin>>n;
   string s;
   cin>>s;
   ll k=0;
   for(ll i=0;i<n;i++){
    if(s[i]==s[i+1]){
        k++;
    }
   }
   cout<<k;
}
