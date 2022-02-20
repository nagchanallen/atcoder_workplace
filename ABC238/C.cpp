#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 998244353;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
ll N, ans = 0;

int main() {
    cin >> N;
    for (ll i = 1e17; i >= 1; i /= 10) {
        if (N < i) continue;
        ll inc = (N - i + 2) % MOD * ((N - i + 1) % MOD) % MOD;
        ans = (ans + inc) % MOD;
        N = i - (ll)1;
    }
    cout << ans * inv_mod(2, MOD) % MOD << endl;
}