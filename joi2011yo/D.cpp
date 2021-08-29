#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int N, a[105];
ll dp[105][50];

int main() {
    // input
    cin >> N;
    rep1(i, N) cin >> a[i];
    // solve
    dp[1][a[1]] = 1;
    for(int i = 2; i <= N; ++i) {
        for (int j = 0; j <= 20; ++j) {
            if (j >= a[i]) {
                dp[i][j] += dp[i - 1][j - a[i]];
            }
            if (j + a[i] <= 20) {
                dp[i][j] += dp[i - 1][j + a[i]];
            }
        }
    }
    // output
    cout << dp[N - 1][a[N]] << endl;
}