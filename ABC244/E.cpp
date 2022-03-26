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
int N, M, K, S, T, X;
vector<vector<int>> G;

mint dp[2005][2005][3];

int main() {
    cin >> N >> M >> K >> S >> T >> X;
    G.resize(N + 1);
    for (int i = 0; i < M; ++i) {
        int u, v; cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    dp[0][S][1] = 1;
    dp[0][S][0] = 0;
    for (int i = 1; i <= K; ++i) {
        for (int j = 1; j <= N; ++j) {
            for (auto next: G[j]) {
                if (next == X) {
                    dp[i][next][0] += dp[i - 1][j][1];
                    dp[i][next][1] += dp[i - 1][j][0];
                } else {
                    dp[i][next][0] += dp[i - 1][j][0];
                    dp[i][next][1] += dp[i - 1][j][1];
                }
            }
        }
    }
    cout << dp[K][T][1].val() << endl;
}