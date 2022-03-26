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
using mint = modint998244353;
int N;
mint dp[10][1000005], ans = 0;

int main() {
    cin >> N;
    for (int i = 1; i <= 9; ++i) {
        dp[i][1] = 1;
    }
    for (int i = 2; i <= N; ++i) {
        dp[1][i] = dp[1][i - 1] + dp[2][i - 1];
        for (int j = 2; j <= 8; ++j) {
            dp[j][i] = dp[j - 1][i - 1] + dp[j][i - 1] + dp[j + 1][i - 1];
        }
        dp[9][i] = dp[8][i - 1] + dp[9][i - 1];
    }
    for (int i = 1; i <= 9; ++i) {
        ans += dp[i][N];
    }
    cout << ans.val() << endl;
}