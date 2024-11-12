#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin>>str;
    set<char> ans;
    for(int i=0;i<str.size();i++)
    {
        ans.insert(str[i]);
    }
    int n=ans.size();
    if(n%2==0)
    {
        cout << "CHAT WITH HER!" << endl;
    }
    else
    {
        cout << "IGNORE HIM!" << endl;
    }
}
