#include<bits/stdc++.h>
#define ll long long int
#define fast  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
   fast;
    ll n;
    cin>>n;
    string s1,s2;
  set<pair<string,string>>st;
  for(ll i=0;i<n;i++){
    cin>>s1>>s2;
     st.insert({s1,s2});

  }
  cout<<st.size()<<endl;
}
