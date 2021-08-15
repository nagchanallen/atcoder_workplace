#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

using Graph = vector<vector<int>>;
Graph G;
// global variables
int N, S[200005], T[200005], dp[400005];

int main() {
    // input
    cin >> N;
    rep0(i, N) cin >> S[i];
    rep0(i, N) {
        cin >> T[i];
    }
    dp[0] = INTINF;
    // solve
    for (int i = 1; i <= 2 * N; i++) {
        dp[i % N] = min(dp[(i - 1) % N] + S[(i - 1) % N], T[i % N]);
    }
    // output
    rep0(i, N) cout << dp[i] << endl;
}