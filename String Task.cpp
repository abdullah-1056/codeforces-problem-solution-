#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
   string s;
    cin>>s;
    transform(s.begin(),s.end(),s.begin(),::tolower);


    for(ll i=0;i<s.size();i++){
       if(s[i]!='a' && s[i]!= 'o' && s[i]!='y' && s[i]!='e' && s[i]!='u' && s[i]!='i'){
              cout<<"."<<s[i];
       }

    }
    return 0;
}
