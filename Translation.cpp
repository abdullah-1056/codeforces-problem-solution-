#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll c=0;
   string s1,s2;
   cin>>s1>>s2;
   ll n=s1.size();
   ll m=s2.size();
   if(n==m){
    for(ll i=0;i<n;i++){
        if(s1[i]==s2[(n-1)-i]){
            c++;
        }
    }
    if(c==m){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

   }
   else{
    cout<<"NO"<<endl;
   }
}
