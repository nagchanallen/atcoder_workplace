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
mint dp[60][10000];

int main() {
    cin >> N >> M >> K;
    dp[0][0] = 1;
    for (int i = 1; i <= N; ++i) {
        for (int j = 0; j <= 2500; ++j) {
            for (int k = 1; k <= M; ++k) {
                if (j + k <= K) dp[i][j + k] += dp[i - 1][j];
            }
        }
    }

    mint ans = 0;
    for (int i = N; i <= K; ++i) {
        ans += dp[N][i];
    }

    cout << ans.val() << endl;
}