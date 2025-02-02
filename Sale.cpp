#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
      ll n,m;
      cin>>n>>m;
      ll s=0;
      ll arr[n];

      for(ll i=0;i<n;i++){
        cin>>arr[i];
      }

      sort(arr,arr+n);

      for(ll i=0;i<m;i++){
            if(arr[i]<=0){
                s=s+arr[i];
            }

      }
      cout<<s*(-1)<<endl;
}
