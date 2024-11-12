#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[0]=='a' && s[1]=='b'){
            cout<<"YES"<<endl;
        }
            if(s[0]=='a' && s[1]=='c'){

                cout<<"YES"<<endl;
            }
            if(s[0]=='b' && s[1]=='a'){

                cout<<"YES"<<endl;

            }
            if(s[0]=='b' && s[1]=='c'){

                cout<<"NO"<<endl;

            }
            if(s[0]=='c' && s[1]=='a'){

                cout<<"NO"<<endl;

            }
            if(s[0]=='c' && s[1]=='b'){

                cout<<"YES"<<endl;

            }


    }
}
