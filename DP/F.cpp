#include <bits/stdc++.h>
using namespace std;
string s, t;
int dp[3005][3005];

int main() {
    cin >> s; cin >> t;
    int S = s.length(); int T = t.length();
    dp[0][0] = 0; dp[0][1] = 0; dp[1][0] = 0;
    for (int i = 1; i <= S; i++) {
        for (int j = 1; j <= T; j++) {
            if (s[i - 1] == t[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout << dp[S][T] << endl;
}