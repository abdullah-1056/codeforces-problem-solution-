#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {

    ll t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        ll n = s.size();

        cout << s[0];

        for (ll i = 0; i < n + 1; i++) {
            if (s[i] == ' ') {
                cout << s[i + 1];
            }
        }
        cout << endl;
    }

    return 0;
}
