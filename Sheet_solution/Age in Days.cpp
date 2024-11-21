#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,x,y,q,p;
    ll a,b,c,d,e;
    cin>>n;
    if(n>=365){
        x=n/365;
    cout<<x<<" years"<<endl;
    y=n-(x*365);

     if(y<30){
        cout<<"0 months"<<endl;
        cout<<y<<" days"<<endl;
     }
    else if(y>=30){
        q=y/30;
    cout<<q<<" months"<<endl;
     p=y-(q*30);
    cout<<p<<" days"<<endl;
    }
 }
 else if(n<365){
    cout<<"0 years"<<endl;
    if(n>=30){
        a=n/30;
        cout<<a<<" months"<<endl;
      b=n-a*30;
      cout<<b<<" days"<<endl;
    }
    else if(n<30){
            cout<<"0 months"<<endl;
    cout<<n<<" days"<<endl;
 }


 }

}
