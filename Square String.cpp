#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll n=s.size();
        int m=0;
        if(n%2!=0){

            cout<<"NO"<<endl;
        }
        else{
            for(ll i=0;i<n/2;i++)
            {
                if(s[i]==s[n/2 +i])
                {
                   continue;
                }
                else
                {
                    m=1;
                    break;
                }
            }
            if(m==0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}
