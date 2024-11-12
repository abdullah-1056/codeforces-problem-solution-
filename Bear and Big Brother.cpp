#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll a,b;
   cin>>a>>b;
     ll i;
   for(i=0;b>=a;i++){
    a=a*3;
    b=b*2;
   }
   cout<<i<<endl;
}
