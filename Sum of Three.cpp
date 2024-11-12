#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x,y,z;
        cin>>n;
        if(n<=6 || n==9){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
           x=1;
           y=2;
           z=n-(x+y);
           if(z%3!=0){
            cout<<x<<" "<<y<<" "<<z<<endl;
           }
           else{
            cout<<x<<" "<<y+2<<" "<<z-2<<endl;
           }
        }
    }
}
