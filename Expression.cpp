#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll a,b,c,v;
   cin>>a>>b>>c;
   ll w,x,y,z;

   v=a+b+c;
   w=a+b*c;
   x=a*(b+c);
   y=a*b*c;
   z=(a+b)*c;

   ll p=max(w,x);
   ll q=max(y,z);
   ll r=max(p,q);
   cout<<max(r,v);
}
