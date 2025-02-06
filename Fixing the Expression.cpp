#include<bits/stdc++.h>
#define  ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){

        string s;
        cin>>s;

        //string a(1, s[0]);
        //string b(1, s[2]);


          int fa = s[0] - '0';
          int th = s[2] - '0';

           if(fa==th){
               cout<<fa<<"="<<th<<endl;
           }
           else if(fa>th){
               cout<<fa<<">"<<th<<endl;
           }
           else{
               cout<<fa<<"<"<<th<<endl;
           }


    }
}
