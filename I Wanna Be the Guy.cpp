#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    ll n, p, q;
    cin >> n;
    cin >> p;

    vector<ll> v1(p);
    for (ll i = 0; i < p; i++) {
        cin >> v1[i];
    }

    cin >> q;
    vector<ll> v2(q);
    for (ll j = 0; j < q; j++) {
        cin >> v2[j];
    }

    ll m = p + q;
    ll r = 0;
    vector<ll> v3;

    for (ll k = 0; k < m; k++) {
        if (k < p) {
            v3.push_back(v1[k]);
        } else {
            v3.push_back(v2[r]);
            r++;
        }
    }
    sort(v3.begin(), v3.end());

    int count = 1;
    for (ll i = 0; i < m-1; i++) {
        if (v3[i] != v3[i + 1]) {
            count++;
        }
    }
    if(p==0 && q==0){
        cout << "Oh, my keyboard!"<< endl;
    }
    else if (n == count) {
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}
