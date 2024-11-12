#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int32_t main(){
   string s1,s2;
   cin>>s1>>s2;
   for(ll i=0;i<s1.size();i++){
      if(s1[i]==s2[i])
        cout<<'0';
      else
        cout<<'1';
   }
}
