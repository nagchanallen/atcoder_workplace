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
using mint = modint998244353;

// global variables
int N, M, K;
mint dp[1005][5005];

int main() {
    cin >> N >> M >> K;
    for (int i = 0; i <= N; ++i) {
        for (int j = 0; j <= M; ++j) {
            dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= M; ++i) {
        dp[1][i] = i;
    }

    for (int i = 2; i <= N; ++i) {
        for (int j = 1; j <= M; ++j) {
            if (K == 0) {
                dp[i][j] = dp[i][j - 1] + dp[i - 1][M];
                continue;
            }
            mint left = 0, right = 0;
            if (j - K >= 1) {
                left = dp[i - 1][j - K];
            }
            if (j + K <= M) {
                right = dp[i - 1][M] - dp[i - 1][j + K - 1];
            }
            dp[i][j] = dp[i][j - 1] + left + right;
            // cout << left.val() << " " << right.val() << " " << dp[i][j].val() << endl;
        }
    }

    cout << dp[N][M].val() << endl;
}