#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll t;
    cin >> t;
    while(t--){

    ll n;
    cin >> n;
    vector<ll> v(n);

unordered_map<ll, ll>vm;

for(ll i = 0; i < n; i++) {
            cin >> v[i];
            vm[v[i]]++;
        }

ll result = -1;
    for(auto &f:vm) {
            if(f.second >= 3) {
                result = f.first;
                break;
    }
}
    cout<<result<< endl;
    }


}
