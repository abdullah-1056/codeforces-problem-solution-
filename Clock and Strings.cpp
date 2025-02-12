#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){

    ll a,b,c,d,p=0;
    cin>>a>>b>>c>>d;

    if(a>b){
        for(ll i=b;i<a;i++){
            if(i==c || i==d){
                p++;
            }
        }

    }
     else if(a<b){
        for(ll i=a;i<b;i++){
            if(i==c || i==d){
                p++;
            }
        }
    }

    if(p==1){
        cout<<"YES"<<endl;
    }else
    {

        cout<<"NO"<<endl;
    }
   }
}
