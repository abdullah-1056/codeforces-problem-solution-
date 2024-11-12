#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll a,b,k;
   cin>>a>>b>>k;
   if(a%k==0 && b%k==0){
    cout<<"Both"<<endl;
   }
   else if(a%k==0 && b%k!=0){
    cout<<"Memo"<<endl;
   }
   else if(a%k!=0 && b%k==0){
    cout<<"Momo"<<endl;
   }else
      cout<<"No One"<<endl;
}
