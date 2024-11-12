#include <bits/stdc++.h>
#define ll long long int
using namespace std;

bool x(ll year) {
    string s = to_string(year);
    for (int i = 0; i < s.size(); i++) {
        for (int j = i + 1; j < s.size(); j++) {
            if (s[i] == s[j]) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    ll n;
    cin >> n;
    n=n+1;

    while (!x(n)) {
        n++;
    }

    cout << n << endl;
    return 0;
}
