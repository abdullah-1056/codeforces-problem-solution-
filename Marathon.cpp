#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll a,b,c,d,k=0;
    cin>>a>>b>>c>>d;
    if(a<=b){
        k++;
    }
   if(a<=c){
        k++;
    }
    if(a<=d){
        k++;
    }
    cout<<k<<endl;
   }
}
