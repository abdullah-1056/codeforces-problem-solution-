#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll n,m=0,p=0;
   cin>>n;
   string s;
   cin>>s;
   for(ll i=0;i<s.size();i++){

    if(s[i]=='1'){
        p++;
    }
    else if(s[i]=='0'){
        m++;
    }
   }

    if(p>m){
        cout<<p-m<<endl;
    }
    else if(m>p){
        cout<<m-p<<endl;
    }
    else if(m==p){
        cout<<"0"<<endl;
    }

}
