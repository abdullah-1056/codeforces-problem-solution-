#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ll a;
    cin>>a;
 while(a--){
        ll n;
        cin>>n;
   string s;
   cin>>s;
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    for(ll i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            s.erase(i,1);
            i--;
        }
    }
    if(s=="meow")
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    }
}
