#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){
        ll n;
   cin>>n;
   vector<int>ar1(n);
   vector<int>ar2(n);
    for(ll i=0;i<n;i++){
        cin>>ar1[i];
    }
    for(ll i=0;i<n;i++){
        cin>>ar2[i];
    }

    for(ll i=0;i<n;i++){
       if(ar1[i]<ar2[i]){
        swap(ar1[i],ar2[i]);
       }
    }


    cout<<*max_element(ar1.begin(),ar1.end())* *max_element(ar2.begin(),ar2.end())<<endl;
   }
}
