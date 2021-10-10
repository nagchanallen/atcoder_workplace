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
int N, a[3005], b[3005];
ll dp[3005][3005];

int main() {
    // input
    cin >> N;
    rep1(i, N) cin >> a[i];
    rep1(i, N) cin >> b[i];
    // solve
    for (int i = 0; i <= 3000; ++i) dp[0][i] = 1;
    
    for (int i = 1; i <= N; ++i) {
        for (int j = a[i]; j <= 3000; ++j) {
            if (j <= b[i]) {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % 998244353;
            } else {
                dp[i][j] = dp[i][j - 1];
            }
        }
    }
    cout << dp[N][b[N]] << endl;
}