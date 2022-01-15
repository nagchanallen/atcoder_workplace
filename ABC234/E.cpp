#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
ll X;
string temp = "";

int main() {
    cin >> X;
    if (X < 10) {
        cout << X << endl;
        return 0;
    }
    if (X <= 123456789) {
        for (ll i = X; i <= 123456789; ++i) {
            temp = to_string(i);
            bool ok = true;
            int diff = temp[1] - temp[0];
            for (int j = 1; j < temp.length(); ++j) {
                if (temp[j] - temp[j - 1] != diff) {
                    ok = false;
                    break;
                } 
            }
            if (ok) {
                cout << temp << endl;
                return 0;
            }
        }
    }
    if (X > 777777777 && X <= 876543210) {
        cout << 876543210 << endl;
        return 0;
    }
    if (X > 888888888 && X <= 987654321) {
        cout << 987654321 << endl;
        return 0;
    }
    if (X > 8888888888 && X <= 9876543210) {
        cout << 9876543210 << endl;
        return 0;
    }
    string temp2 = to_string(X);

    bool ok = true;
    int diff = temp2[1] - temp2[0];
    for (int j = 1; j < temp2.length(); ++j) {
        if (temp2[j] - temp2[j - 1] != diff) {
            ok = false;
            break;
        } 
    }
    if (ok) {
        cout << temp2 << endl;
        return 0;
    }

    string numS = "";
    for (int i = 0; i < temp2.length(); ++i) {
        numS += temp2[0];
    }
    ll num = stoll(numS);

    char display = 'a';
    if (X < num) {
        display = temp2[0];
    } else {
        if (temp2[0] == '9') {
            display = '1';
            cout << display;
        } else {
            display = temp2[0] + 1;
        }
    }

    while (X > 0) {
        cout << display;
        X /= 10;
    }
    cout << endl;
}