#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll a,x,n;
    ll even=0,odd=0;
    cin>>x;
    n=2*x;
   vector<int>v(n);
    for(ll i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        if(a%2==0)
           even++;
        else
            odd++;
    }


    if(even==odd){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
}
