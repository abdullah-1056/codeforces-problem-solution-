
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){

   ll t;
   cin>>t;
   while(t--){
    ll n;

    cin>>n;

      char arr[n][4];
    for(ll i=0;i<n;i++){
        for(ll j=0;j<4;j++){
            cin>>arr[i][j];

        }
    }

    for(ll i=n-1;i>=0;i--){
        for(ll j=0;j<4;j++){
           if(arr[i][j]=='#'){
            cout<<j+1<<" ";
               break;
            }

        }
   }
   cout<<endl;

 }
return 0;
}
