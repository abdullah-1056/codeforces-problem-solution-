#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll n;
   cin>>n;

   string s;
   cin>>s;

    set<char>p;
    for(ll i=0;i<n;i++){
        p.insert(tolower(s[i]));
    }

   if(p.size()==26){
    cout<<"YES"<<endl;
   }else{
    cout<<"NO"<<endl;
   }


}
