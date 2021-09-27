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

// global 
ll N, A[100005], dp[100005][15];

int main() {
    // input
    cin >> N;
    rep1(i, N) cin >> A[i];
    // solve
    dp[1][A[1]] = 1;
    for (int i = 2; i <= N; ++i) {
        for (int j = 0; j < 10; ++j) {
            int F = (j + A[i]) % 10;
            int G = (j * A[i]) % 10;
            dp[i][F] = (dp[i][F] + dp[i - 1][j]) % 998244353;
            dp[i][G] = (dp[i][G] + dp[i - 1][j]) % 998244353;
        }
    }
    for (int i = 0; i < 10; ++i) cout << dp[N][i] % 998244353 << endl;
}