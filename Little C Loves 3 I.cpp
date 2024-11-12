#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll n,a=1,b=1,c;
   cin>>n;
   c=n-2;
   if(c%3!=0){
    cout<<a<<" "<<b<<" "<<c<<endl;
   }
   else{
    cout<<a<<" "<<b+1<<" "<<c-1<<endl;
   }

}
