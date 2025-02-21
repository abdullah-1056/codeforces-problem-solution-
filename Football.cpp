#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll n,p=1,q=0;
   cin>>n;
   vector<string>vs(n);


     cin.ignore();
    for(int i=0;i<n;i++){
        getline(cin, vs[i]);
    }
    sort(vs.begin(),vs.end());

    string t=vs[0];
    for(int i=0;i<n;i++){
       if(vs[i]==t){
         p++;
       }
       else{
        q++;
       }
    }
    if(p>q){
      cout<<vs[0];
    }else{
      cout<<vs[n-1];
    }


}



