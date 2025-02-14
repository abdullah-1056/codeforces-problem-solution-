#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
     ll t;
     cin>>t;
         while(t--){
            string s;
            cin>>s;
            ll p=0;
            for(ll i=0; i<s.size()-1; i++){
                if(s[i]==s[i+1]){
                   p++;
                   break;
                }

            }
            if(p>0){
                cout<<"1"<<endl;
            }
            else{
                cout<<s.size()<<endl;
            }
         }
}
