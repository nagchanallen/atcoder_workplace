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
int D, N, T[300], A[300], B[300], C[300], dp[205][205];

int main() {
    // input
    cin >> D >> N;
    rep1(i, D) cin >> T[i];
    rep1(i, N) cin >> A[i] >> B[i] >> C[i];
    // solve
    for (int i = 2; i <= D; ++i) {
        for (int j = 1; j <= N; ++j) {
            int maxi = 0;
            for (int k = 1; k <= N; ++k) {
                if (T[i] >= A[j] && T[i] <= B[j] && T[i - 1] >= A[k] && T[i - 1] <= B[k]) {
                    maxi = max(maxi, dp[i - 1][k] + abs(C[k] - C[j]));
                }
            }
            dp[i][j] = maxi;
        }
    }
    // output
    int ans = 0;
    rep1(i, N) ans = max(ans, dp[D][i]);
    cout << ans << endl;
}