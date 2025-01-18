#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
   ll n,s=0;
   ll one=0,two=0,th=0,f=0;
   cin>>n;
   ll arr[n];

   for(ll i=0;i<n;i++){
    cin>>arr[i];

     if(arr[i]==1)
         one++;
     if(arr[i]==2)
         two++;
     if(arr[i]==3)
         th++;
     if(arr[i]==4)
         f++;
   }

    s+=f;

    if(th>one){
        s+=th;

        if(two%2==0){
            s+=two/2;
        }
        else{
            s+=((two/2)+1);
        }
    }
    else if(one>th){
        s+=th;
        one-=th;

        if(two%2==0){
            s+=two/2;

            if(one%2==0 && one%4==0){
                s+=(one/4);
            }else{
                s+=((one/4)+1);
            }
        }
        else{
            s+=((two/2)+1);
            one-=2;

            if(one>0){
                if(one%2==0 && one%4==0){
                s+=(one/4);
            }else{
                s+=((one/4)+1);
            }
            }
        }
    }
    else if(one==th){
        s+=th;
        if(two%2==0){
            s+=two/2;
        }
        else{
            s+=((two/2)+1);
        }
    }
    cout<<s<<endl;
}
