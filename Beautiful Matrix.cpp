#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll ar[5][5];
   ll i,j,y,z;
   for(i=0;i<5;i++){
      for(j=0;j<5;j++){
        cin>>ar[i][j];
          if(ar[i][j]==1){
            y=i;
            z=j;
          }
      }
   }
   cout<<(abs(y-2))+(abs(z-2))<<endl;
}
