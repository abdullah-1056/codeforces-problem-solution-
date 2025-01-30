#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
  ll n,i=1;
  cin>>n;

  ll arr[n];

  for(ll i=0;i<n;i++){
        cin>>arr[i];
    }

     sort(arr,arr+n);

  set<int>p;
    for(ll i=0;i<n;i++){
        p.insert(arr[i]);
    }


  if(n==1 || p.size()==1){
    cout<<"NO";
  }
  else{
 cout <<*next(p.begin(),i);
  }

}
