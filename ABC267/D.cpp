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
ll N, M;
ll A[200005], dp[2005][2005];

int main() {
    cin >> N >> M;
    rep1(i, N) {
        cin >> A[i];
    }

    rep0(i, 2004) rep0(j, 2004) {
        dp[i][j] = -LLINF;
    }
    rep0(i, 2004) {
        dp[i][0] = 0;
    }

    for (ll i = 1; i <= N; ++i) {
        for (ll j = 1; j <= M; ++j) {
            dp[i][j] = max(dp[i - 1][j - 1] + j * A[i], dp[i - 1][j]);
        }
    }

    cout << dp[N][M] << endl;
}