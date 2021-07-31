#include <bits/stdc++.h>
using namespace std;
int N, W, w[105], v[105];
long long dp[105][100025];
int main() {
    cin >> N >> W;
    for (int i = 1; i <= N; i++) {
        cin >> w[i] >> v[i];
    }
    for (int i = 0; i <= N; i++) {
        for (int j = 0; j <= 100005; j++) {
            dp[i][j] = 1e9 + 1;
        }
    }
    for (int i = 0; i <= N; i++) {
        dp[i][0] = 0;
    }
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= 100005; j++) {
            if (j - v[i] >= 0) {
                dp[i][j] = min(dp[i - 1][j - v[i]] + w[i], dp[i - 1][j]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    int maxi = 0;
    for (int i = 0; i <= 100005; i++) {
        if (dp[N][i] <= W) {
            maxi = max(maxi, i);
        }
    }
    cout << maxi << endl;
}