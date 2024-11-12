#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main(){
    ll t,m=0,s=0;
    cin>>t;
    while(t--){
    ll n,u;
   cin>>n>>u;

   s=s-n;
   s=s+u;
    if(s>m){
        m=s;
    }

    }
 cout <<m<< endl;
    return 0;
}
