#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,p=0;
    cin>>n;

    string s;

    for(ll i=0;i<n;i++){
       cin>>s;
       if(s=="Tetrahedron")
            p+=4;
       else if(s=="Cube")
            p+=6;
       else if(s=="Octahedron")
            p+=8;
        else if(s=="Dodecahedron")
            p+=12;
        else if(s=="Icosahedron")
            p+=20;
    }
    cout<<p<<endl;
}
