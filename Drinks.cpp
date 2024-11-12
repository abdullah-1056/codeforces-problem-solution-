#include<bits/stdc++.h>

using namespace std;
int main(){
   int n;
   double p=0,k;
   cin>>n;
   vector<double>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
   p += v[i];
   }

  k=p/(n);
   cout << setprecision(14) <<k;
}
