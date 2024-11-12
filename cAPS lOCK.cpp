#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll c=0,d=0;
   string s;
   cin>>s;
   for(ll i=1;i<s.size();i++){
    if(islower(s[i])){
        c++;
    }
   }
    for(ll i=0;i<s.size();i++){
    if(isupper(s[i])){
        d++;
    }
    if(d==s.size()){
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;
    return 0;
   }
   }
   if(islower(s[0]) && c==0){
         s[0]=toupper(s[0]);
         for(ll i=1;i<s.size();i++){
            s[i]=tolower(s[i]);
         }
         cout<<s<<endl;
   }

   else{
    cout<<s<<endl;
   }




}
