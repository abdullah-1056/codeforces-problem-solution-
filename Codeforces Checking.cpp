
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
            ll n=1;
         string s="codeforces";
         string s1;
         cin>>s1;


     ll p=0;

    for(int i=0;i<s1.size();i++){
        for(int j=0;j<s.size();j++){
            if(s[j]==s1[i]){
                p++;
            }
//Abdullah
        }
    }
    if(p>=1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    }


}
