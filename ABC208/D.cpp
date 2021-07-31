#include <bits/stdc++.h>
using namespace std;
int N, M;
using ll = long long;
#define rep(i, n) for (int i = 0; i <= (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll dp[405][405][405], sum = 0;
ll LLINF = 2e18;

struct Edge {
    int to;
    int weight;
    Edge(int t, int w) : to(t), weight(w) {}
};
using Graph = vector<vector<Edge>>;

int main() {
    cin >> N >> M;

    Graph G(N + 1);
    for (int i = 0; i < M; i++) {
        int A, B, C;
        cin >> A >> B >> C;
        G[A].push_back(Edge(B, C));
    }

    rep1(s, N) rep1(t, N) rep(k, N) {
        if (s == t) {
            dp[s][t][k] = 0;
        } else {
            dp[s][t][k] = LLINF;
        }
    }

    rep1(i, N) rep1(j, N) {
        for (auto E: G[i]) {
            if (E.to == j) {
                dp[i][j][0] = E.weight;
            }
        }
    }

    rep1(k, N) rep1(s, N) rep1(t, N) {
        dp[s][t][k] = min(dp[s][t][k - 1], dp[s][k][k - 1] + dp[k][t][k - 1]);
        if (dp[s][t][k] < 2e18) {
            sum += dp[s][t][k];
        }
    }

    cout << sum << endl;
}