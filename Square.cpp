#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
  int a1,b1,a2,b2,a3,b3,a4,b4;
  cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
    int l;
    if(a1==a2){
        l=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
    }
    else if(a1==a3){
        l=sqrt((a1-a3)*(a1-a3)+(b1-b3)*(b1-b3));
    }
    else if(a1==a4){
        l=sqrt((a1-a4)*(a1-a4)+(b1-b4)*(b1-b4));
    }

    cout<<l*l<<endl;
    }
}
