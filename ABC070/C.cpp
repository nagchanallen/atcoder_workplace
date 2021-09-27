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
int N;
ll T[105];

int main() {
    // input
    cin >> N;
    ll ans = 1;
    rep0(i, N) cin >> T[i];
    // solve
    rep0(i, N) {
        ans = lcm(ans, T[i]);
    }
    // output
    cout << ans << endl;
}