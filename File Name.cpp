#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll n,coun=1,ans=0;
   cin>>n;
   string s;
   cin>>s;
   for(ll i=0;i<=s.size();i++){
    if(s[i]=='x'&&s[i+1]=='x'){
        coun++;

    if(coun>=3){
       ans++;
            }
    }
    else{
    coun=1;
   }
   }

   cout<<ans;

}
