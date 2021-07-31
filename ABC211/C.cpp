#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repi(i, a, b) for(int i = int(a); i <= int(b); ++i)
ll MOD = 1000000007;
ll dp[15][100050];

int main() {
    string S;
    string T = "chokudai";
    cin >> S;
    repi(i, 1, 8) dp[i][0] = 0;
    repi(i, 0, S.length()) dp[0][i] = 1;
    repi(i, 1, 8) repi(j, 1, S.length()) {
        if (S[j - 1] == T[i - 1]) {
            dp[i][j] = dp[i - 1][j - 1] % MOD + dp[i][j - 1] % MOD;
        } else {
            dp[i][j] = dp[i][j - 1] % MOD;
        }
    }
    cout << dp[8][S.length()] % MOD << endl;
}