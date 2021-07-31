#include <bits/stdc++.h>
using namespace std;
long long N, K, h[100005];
long long dp[100005];

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        cin >> h[i];
    }
    h[0] = h[1];
    dp[0] = 0;
    dp[1] = 0;
    for (long long i = 2; i <= N; i++) {
        long long mini = 1e18;
        for (int j = 1; j <= min(K, i); j++) {
            mini = min(dp[i - j] + abs(h[i] - h[i - j]), mini);
        }
        dp[i] = mini;
    }
    cout << dp[N] << endl;
}