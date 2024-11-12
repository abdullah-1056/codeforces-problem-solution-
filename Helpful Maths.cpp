#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   string s;
   cin>>s;
   sort(s.begin(),s.end());
   ll n=s.size()/2;
   for(ll i=n;i<s.size();i++){
    cout<<s[i];
    if(i!=s.size()-1){
        cout<<"+";
    }
   }

}
