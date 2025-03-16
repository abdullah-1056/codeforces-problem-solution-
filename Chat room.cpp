#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   string s="hello";
   string q;
   cin>>q;

   ll a=0,n=q.size();

   for(ll i=0;i<n;i++){
       if(q[i]==s[a]){
          a++;
       }
   }
   if(s.size()==a){
     cout<<"YES";
   }
   else{
      cout<<"NO";
   }
}
