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
int T;

int main() {
    cin >> T;
    rep0(t, T) {
        ll a, s;
        cin >> a >> s;
        ll x = 0, y = 0;
        for (ll i = 1; i <= ((ll)1 << 60); i = i << 1) {
            if (a & i) {
                x += i;
                y += i;
            }
        }
        ll remain = s - x - y;
        if (s < 0) {
            cout << "No" << endl;
            return 0;
        }
        for (ll i = ((ll)1 << 62); i >= 1; i = i >> 1) {
            if (!(x & i)) {
                if (remain >= i) {
                    remain -= i;
                }
            }
        }
        if (remain == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}