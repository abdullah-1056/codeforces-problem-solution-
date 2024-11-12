#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n;
        if(n==1 || n==2){
            cout<<"0"<<endl;
        }
        else if(n%2==0){
            x=((n/2)-1);
            cout<<x<<endl;
        }
        else if(n%2!=0){
            x=n/2;
            cout<<x<<endl;
        }
    }
}

