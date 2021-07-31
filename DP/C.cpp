#include <bits/stdc++.h>
using namespace std;
int N, a[100005], b[100005], c[100005], dp[100005][3];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> a[i] >> b[i] >> c[i];
    }
    dp[0][0] = 0;
    dp[0][1] = 0;
    dp[0][2] = 0;
    for (int i = 1; i <= N; i++) {
        dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + a[i];
        dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + b[i];
        dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + c[i];
    }
    cout << max(dp[N][0], max(dp[N][1], dp[N][2])) << endl;
}