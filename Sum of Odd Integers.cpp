#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){
      ll a,b;
      cin>>a>>b;
      if((((a%2)==0) && ((b%2)==0) && ((b*b)<=a))||(((a%2)!=0) && ((b%2)!=0) && ((b*b)<=a))){
        cout<<"YES"<<endl;
      }


      else{

        cout<<"NO"<<endl;
   }
}
}
