#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 10000;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int N, K, A[105], B[105], decided[105];
ll dp[105][5];

int main() {
    // input
    cin >> N >> K;
    rep1(i, K) {
        int A, B;
        cin >> A >> B;
        decided[A] = B;
    }
    // init states
    if (decided[1] != 0) {
        dp[1][decided[1]] = 1;
    } else {
        rep1(i, 3) dp[1][i] = 1;
    }

    if (decided[2] != 0) {
        dp[2][decided[2]] = dp[1][1] + dp[1][2] + dp[1][3];
    } else {
        rep1(i, 3) dp[2][i] = dp[1][1] + dp[1][2] + dp[1][3];
    }

    // transition
    for (int i = 3; i <= N; i++) {
        if (decided[i] != 0) {
            int j = decided[i];
            rep1(k, 3) {
                if (k != j) dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
            }
            if (dp[i - 1][j] != 0) {
                rep1(k, 3) {
                    if (k != j) dp[i][j] = (dp[i][j] + dp[i - 2][k]) % MOD;
                }
            }
        } else {
            rep1(j, 3) {
                rep1(k, 3) {
                    if (k != j) dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
                }
                if (dp[i - 1][j] != 0) {
                    rep1(k, 3) {
                        if (k != j) dp[i][j] = (dp[i][j] + dp[i - 2][k]) % MOD;
                    }
                }
            }
        }
    }
    // output
    cout << (dp[N][1] + dp[N][2] + dp[N][3]) % MOD << endl;
}