#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){
      string s;

      cin>>s;
      ll p=s.size();

      for(ll i=p-1;0<=i;i--){
         if(s[i]=='p'){
            cout<<"q";
         }
         else if(s[i]=='q'){
            cout<<"p";
         }
         else{
            cout<<s[i];
         }
      }
      cout<<endl;
   }

}
