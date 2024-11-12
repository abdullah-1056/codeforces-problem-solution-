#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
   string s;
   cin>>s;
    ll cnt4=0,cnt7=0;
   for(ll i=0;i<s.size();i++){
       if(s[i]=='4')
        {
            cnt4++;
        }
       if(s[i]=='7')
       {
           cnt7++;
       }
   }
   if((cnt4+cnt7==4)||(cnt4+cnt7==7)&&(cnt4>0||cnt7>0))
   {
       cout<< "YES" << endl;
   }
    else
    {
        cout << "NO" << endl;
    }
}
