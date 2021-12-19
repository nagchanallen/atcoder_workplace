#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 998244353;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
ll dp[5][1000005];

int main() {
    ll H, W, K, x1, y1, x2, y2;
    cin >> H >> W >> K;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 != x2 && y1 != y2) {
        // different row & column
        dp[0][0] = 1;
    }
    if (x1 == x2 && y1 != y2) {
        // same row
        dp[1][0] = 1;
    }
    if (x1 != x2 && y1 == y2) {
        // same column
        dp[2][0] = 1;
    }
    if (x1 == x2 && y1 == y2) {
        // same point
        dp[3][0] = 1;
    }
    
    for (int i = 1; i <= K; ++i) {
        // different row & column
        dp[0][i] = ((H - 2 + W - 2) * dp[0][i - 1] % MOD + (W - 1) * dp[2][i - 1] % MOD + (H - 1) * dp[1][i - 1] % MOD) % MOD;
        // same row
        dp[1][i] = (dp[0][i - 1] % MOD + (W - 2) * dp[1][i - 1] % MOD + (W - 1) * dp[3][i - 1] % MOD) % MOD;
        // same column
        dp[2][i] = (dp[0][i - 1] % MOD + (H - 2) * dp[2][i - 1] % MOD + (H - 1) * dp[3][i - 1] % MOD) % MOD;
        // same point
        dp[3][i] = (dp[1][i - 1] + dp[2][i - 1]) % MOD;
    }
    cout << dp[3][K] % MOD << endl;
}

// dp[i][j] = The no. of ways to do i operations and land on the points that:
// j = 0 => with diff. row and col of destination 
// j = 1 => with same row and diff. col of destination 
// j = 2 => with diff. row and same col of destination 
// j = 3 => with same row and col of destination 