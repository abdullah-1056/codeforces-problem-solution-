#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
    ll a,b,n;
    long double m;
    cin>>a>>b;
   if(a%b==0){
    cout<<a%b<<endl;
   }

    else if(a>b){

    cout<<b-(a%b)<<endl;
    }
   else if(b>a){
    cout<<b-a<<endl;
   }

}
}
