#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll t;
   cin>>t;
   while(t--){
       ll n,x,odd=0,even=0;
       cin>>n>>x;
       ll k;


       for(ll i=0;i<n;i++){
         cin>>k;

         if(k%2==0){
            even++;
         }else{
            odd++;
         }
       }

          if(odd==0){
            cout<<"NO"<<endl;
          }
          else{

               x--,odd--;
               while(x>0){
                   if(x>=2 && odd>=2) x-=2,odd-=2;
                   else if(even) x--,even--;
                   else break;
               }
               if(x) cout<<"NO"<<endl;
               else cout<<"YES"<<endl;
          }

   }
}
