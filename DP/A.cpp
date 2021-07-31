#include <bits/stdc++.h>
using namespace std;
int N, h[100005], dp[100005];

int main() {
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cin >> h[i];
    }
    h[0] = h[1];
    dp[0] = 0;
    dp[1] = 0;
    for (int i = 2; i <= N; i++) {
        dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
    }
    cout << dp[N] << endl;
}