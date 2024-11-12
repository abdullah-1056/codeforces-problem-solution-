#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll a,b,c,d,m1,m2,s1,s2;
    cin>>a>>b>>c>>d;
    if(a>b){
        m1=a;
        s1=b;
    }else{
      m1=b;
      s1=a;
    }
    if(c>d){
        m2=c;
        s2=d;
    }else{
      m2=d;
      s2=c;
    }

    if(s1>m2 || s2>m1){
        cout<<"NO"<<endl;
    }else{
       cout<<"YES"<<endl;
    }
   }
}
