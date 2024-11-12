#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int32_t main(){
   ll t;
   cin>>t;
   while(t--){
    ll x,y;
    cin>>x>>y;
    if(x==y){
        cout<<x<<" "<<y<<endl;
    }
    else if(x<y){
        cout<<x<<" "<<y<<endl;
    }
    else{
        cout<<y<<" "<<x<<endl;
    }
   }
}
