#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll m,n,cou=0;
    char k;
    cin>>m>>n;
    for(ll i=0;i<m;i++){
        for(ll j=0;j<n;j++){
            cin>>k;
            if(k=='C' || k=='M' || k=='Y'){
                cou++;
            }
        }
    }
    if(cou>=1){
        cout<<"#Color"<<endl;
    }
    else{
        cout<<"#Black&White"<<endl;
    }
}
