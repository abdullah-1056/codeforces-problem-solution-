#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,x,y;
    cin>>n;

    x=n/100;
    y=n%100;

    x+=y/20;
    y=y%20;

    x+=y/10;
    y=y%10;

    x+=y/5;
    y=y%5;

    x+=y/1;

    cout<<x;
}
