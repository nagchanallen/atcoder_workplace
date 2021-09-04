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
int N, M, D[1005], C[1005], dp[1005][1005];

int main() {
    // input
    cin >> N >> M;
    rep1(i, N) cin >> D[i];
    rep1(i, M) cin >> C[i];
    // solve
    rep0(i, M + 1) dp[i][0] = 0;
    rep1(i, N) dp[0][i] = INTINF;
    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            dp[i][j] = min(dp[i - 1][j - 1] + C[i] * D[j], dp[i - 1][j]);
        }
    }
    // output
    int ans = INTINF;
    for (int i = N; i <= M; ++i) {
        ans = min(ans, dp[i][N]);
    }
    cout << ans << endl;
}