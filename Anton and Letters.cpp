#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   getline(cin,s);

   int c=0;

   long long int n=s.size();
    sort(s.begin(),s.end());


   for(int i=0;i<n;i++){
     if((s[i]!=s[i+1]) &&(s[i]!='{') && (s[i]!='}') && (s[i]!=',') && (s[i]!=' '))
        c++;
   }
   cout<<c;
}
