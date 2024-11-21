#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b, c;
    char x, y;
    cin >> a >> x >> b >> y >> c;
     if (x == '+' && (a + b) == c){
        cout << "Yes" << endl;
    }
    else if (x == '-' && (a - b) == c){
        cout << "Yes" << endl;
    }
    else if (x == '*' && (a * b) == c){
        cout << "Yes" << endl;
    }
    else
    {
        if (x == '+')
        {
            cout << a + b << endl;
        }
        else if (x == '-')
        {
            cout << a - b << endl;
        }
        else if (x == '*')
        {
            cout << a * b << endl;
        }
    }

    return 0;
}
