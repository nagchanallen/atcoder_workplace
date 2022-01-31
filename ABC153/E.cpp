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
int H, N, A[1005], B[1005];
int dp[1005][12005]; 
// dp[i][j] = from 0 to i-th spell type, min magic points needed to decrease monster by j HP

int main() {
    cin >> H >> N;
    rep1(i, N) cin >> A[i] >> B[i];
    rep0(i, 1005) rep1(j, 11500) dp[i][j] = 2e9;
    rep0(i, 1005) dp[i][0] = 0;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= 11500; ++j) {
            if (A[i] > j) dp[i][j] = dp[i - 1][j];
            dp[i][j] = min(dp[i - 1][j], dp[i][j - A[i]] + B[i]);
        }
    }
    int ans = 2e9;
    for (int i = H; i <= 11500; ++i) {
        ans = min(ans, dp[N][i]);
    }
    cout << ans << endl;
}