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
bool G[105][105];
int N, M, U[10005], V[10005];

int main() {
    cin >> N >> M;
    rep1(i, M) {
        cin >> U[i] >> V[i];
        G[U[i]][V[i]] = true;
        G[V[i]][U[i]] = true;
    }

    int cnt = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            for (int k = j + 1; k <= N; ++k) {
                if (G[i][j] && G[j][k] && G[i][k]) {
                    cnt++;
                }
            }
        }
    }

    cout << cnt << endl;
}