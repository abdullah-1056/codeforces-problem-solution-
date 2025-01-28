#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   ll t;
   cin>>t;
   while(t--){

    ll m,a,b,c,n;
    ll p;
    cin>>m>>a>>b>>c;
    n=m;

    if(m>=a){
        m=m-a;
        if(n>=b){
            n=n-b;
            p=m+n;
            if(p>=c){
                cout<<a+b+c<<endl;
            }
            else if(p<c){
                cout<<a+b+p<<endl;
            }
        }
        else if(n<b){
            p=m;
            if(p>=c){
                cout<<a+n+c<<endl;
            }
            else if(p<c){
                cout<<a+n+p<<endl;
            }
        }
    }
    else if(m<a){
        if(n>=b){
            n=n-b;
            p=n;

            if(p>=c){
                cout<<m+b+c<<endl;
            }
            else if(p<c){
                cout<<m+b+p<<endl;
            }
        }
        else if(n<b){
            cout<<m+n<<endl;
        }
    }
   }
}
