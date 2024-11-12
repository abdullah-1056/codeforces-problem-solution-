#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--)
    {
        long long n,cnt1,cnt2;
        cin>>n;
        string s;
        cin>>s;
        vector<char>str;
        for(long long int i=0;i<n;i++)
        {
            if(s[i]=='B')
            {
                cnt1=i;
                break;
            }
        }

        for(long long int i=n-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
                cnt2=i;
                break;
            }
        }
        cout << cnt2-cnt1+1 << endl;
    }
}
