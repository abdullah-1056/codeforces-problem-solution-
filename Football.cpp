#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    ll p=1;
   string s;
   cin>>s;
   for(ll i=0;i<s.size();i++){
      if(s[i]==s[i+1]){
        p++;
        if(p==7){
            cout<<"YES"<<endl;
            return 0;
        }
      }else{
         p=1;
      }

   }

cout<<"NO"<<endl;

   }


