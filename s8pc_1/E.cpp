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
ll N, Q, a[120005], c[120005], s[120005], ans = 0;

ll fast_exponential(ll m, ll n) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        ll temp = fast_exponential(m, n / 2);
        return (temp * temp) % MOD;
    } else {
        ll temp = fast_exponential(m, n - 1);
        return (m * temp) % MOD;
    }
}

int main() {
    // input
    cin >> N >> Q;
    rep1(i, N) cin >> a[i];
    rep1(i, Q) cin >> c[i];
    // solve
    s[1] = 0;
    for (int i = 2; i <= N; ++i) {
        s[i] = (fast_exponential(a[i - 1], a[i]) + s[i - 1]) % MOD;
    }
    c[0] = 1; c[Q + 1] = 1;
    for (int i = 1; i <= Q + 1; ++i) {
        ll big = max(c[i - 1], c[i]);
        ll small = min(c[i - 1], c[i]);
        ans = (ans + s[big] - s[small]) % MOD;
        if (s[big] - s[small] <= 0) {
            ans += MOD;
        }
    }
    cout << ans % MOD << endl;
}