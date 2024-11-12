#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll m,n,a,p,q;
   cin>>m>>n>>a;
    if(m%a==0){
        p=m/a;
    }else{
        p=m/a +1;
    }
    if(n%a==0){
        q=n/a;
    }else{
      q=n/a +1;
    }
    cout<<p*q<<endl;
}
