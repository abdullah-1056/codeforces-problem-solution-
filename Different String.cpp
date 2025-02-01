#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        string o,s,r;
        cin>>o;
        r=o;
        reverse(r.begin(),r.end());
        s=o;
        sort(s.begin(),s.end());

        set<char>st;


        for (int i=0;i<o.size();i++){
            st.insert(o[i]);
        }
        if(st.size()==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            if(o==s){
                cout<<r<<endl;
            }
            else{
                cout<<s<<endl;
            }
        }



    }

}
