#include <bits/stdc++.h>
using namespace std;
int N, W, w[105], v[105];
long long dp[105][100005];

int main() {
    cin >> N >> W;
    for (int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 0; i <= W; i++) {
        dp[0][i] = 0;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= W; j++) {
            if (j - w[i] >= 0) {
                dp[i][j] = max(dp[i - 1][j - w[i]] + v[i], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    long long maxi = 0;
    for (int i = 0; i <= W; i++) {
        maxi = max(maxi, dp[N][i]);
    }
    cout << maxi << endl;
}