#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
   ll n;
    cin>>n;
   if(n%4==0 || n%7==0 || n%47==0){
    cout<<"YES";
    return 0;
   }
   else{
    string s=to_string(n);
      for(ll i=0;i<s.size();i++){
        if(s[i]!='4' && s[i]!='7'){
            cout<<"NO";
            return 0;
        }
      }
      cout<<"YES";
   }
}
