#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll t;
    cin>>t;
    while(t--){
       ll l,r,d,u;
       cin>>l>>r>>d>>u;

       if(l==r && r==d && d==u){
         cout<<"YES"<<endl;
       }
       else{
          cout<<"NO"<<endl;
       }
    }
}
