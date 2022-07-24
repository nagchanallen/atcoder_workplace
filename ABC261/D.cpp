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
ll N, M, X[5005], C[5005], Y[5005], dp[5005][5005];
map<ll, ll> mp;

int main() {
    cin >> N >> M;
    rep1(i, N) cin >> X[i];
    rep1(i, M) {
        cin >> C[i] >> Y[i];
        mp[C[i]] = Y[i];
    } 

    dp[0][0] = 0;
    rep1(i, N) rep1(j, N) {
        if (j > i) dp[i][j] = -LLINF;
    }

    rep1(i, N) {
        for (int j = 0; j < i; ++j) dp[i][0] = max(dp[i][0], dp[i - 1][j]);
        rep1(j, N) {
            if (j <= i) {
                dp[i][j] = dp[i - 1][j - 1] + X[i];
                if (mp.find(j) != mp.end()) {
                    dp[i][j] += mp[j];
                }
            }
        }
    }

    ll ans = 0;
    rep1(i, N) {
        ans = max(ans, dp[N][i]);
    }
    cout << ans << endl;
}