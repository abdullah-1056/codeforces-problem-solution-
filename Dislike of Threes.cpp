#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    ll t;
    cin>>t;
    while(t--){
    int k;
    cin >> k;

    int i = 1;
    int num = 1;

    while (i < k) {
        num++;
        if (num % 3 != 0 && num % 10 != 3) {
            i++;
        }
    }

    cout << num << endl;

   }
}
