#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    string s;
    cin>>s;
    ll p=s.size();
    ll a=0;

    for(ll i=0;i<p;i++){


          if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
              i=i+2;
              if(a>0){
                 cout<<" ";
              }
          }
          else{
             cout<<s[i];
             a++;
          }


    }

}
