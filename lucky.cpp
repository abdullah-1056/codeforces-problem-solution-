#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;

      while(t--){
           long long int n;
      cin>>n;

      int sum1=0;
      int sum2=0;
      int a=3;
      while(a--)
      {
        sum1=sum1+n%10;
        n=n/10;
      }
      while(n){
        sum2=sum2+n%10;
        n=n/10;
      }
      if(sum1==sum2)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
      }
}
