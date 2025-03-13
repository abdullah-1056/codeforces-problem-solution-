#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll t;
  cin>>t;

  while(t--){
     ll n;
     cin>>n;
     if(n<6){
        cout<<"15"<<endl;
     }else{
             if(n%2==0){
         cout<<(n/2)*5<<endl;
     }else{
         cout<<((n+1)/2)*5<<endl;
     }
     }

  }
}
