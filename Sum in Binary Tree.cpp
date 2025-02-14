#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
      ll t;
      cin>>t;

      while(t--){
        ll n,s;
        cin>>n;
        s=n;

        while(n>1){
            s+=n/2;
            n=n/2;
        }
        cout<<s<<endl;
      }
}
