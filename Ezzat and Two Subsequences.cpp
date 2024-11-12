#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll tc;
    cin>>tc;
    while(tc--)
    {
	ll n,sum=0;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    for(ll i=0;i<n-1;i++)
    {
        sum=sum+a[i];
    }


    cout<<fixed<<setprecision(11)<<1.0*sum/(n-1)+a[n-1]<< endl;
    }
}
