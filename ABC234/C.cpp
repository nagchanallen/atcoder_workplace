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
ll K;

int main() {
    cin >> K;
    ll temp = K;
    string ans = "";
    while (true) {
        if (temp == 1) {
            ans += '2';
            reverse(ans.begin(), ans.end());
            cout << ans << endl;
            return 0;
        }
        if (temp & 1) {
            ans += '2';
        } else {
            ans += '0';
        }
        temp /= 2;
    }
}