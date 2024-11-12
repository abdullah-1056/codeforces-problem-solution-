#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
       string f,s;
       cin>>f>>s;
       transform(f.begin(),f.end(),f.begin(),::toupper);
       transform(s.begin(),s.end(),s.begin(),::toupper);
       ll n=s.size();
       for(ll i=0;i<n;i++){
         if(f[i]>s[i]){
            cout<<"1"<<endl;
             return 0;
         }
         else if(f[i]<s[i]){
            cout<<"-1"<<endl;
            return 0;
         }
       }
       cout<<"0"<<endl;

}
