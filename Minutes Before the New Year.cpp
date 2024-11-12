#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){
    ll h,m,x,y;
    cin>>h>>m;
    if(h<24){
        x=(23-h)*60;
        y=60-m;
    }
     cout<<x+y<<endl;
   }
}
