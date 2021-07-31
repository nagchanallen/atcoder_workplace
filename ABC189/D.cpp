#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

int N;
ll dp[80][5];
string S[80];

int main() {
    cin >> N;
    rep1(i, N) cin >> S[i];
    dp[0][0] = 1; dp[0][1] = 1;
    rep1(i, N) {
        if (S[i] == "AND") {
            dp[i][0] = dp[i - 1][0] * 2 + dp[i - 1][1];
            dp[i][1] = dp[i - 1][1];
        } else {
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = dp[i - 1][0] + dp[i - 1][1] * 2;
        }
    }
    cout << dp[N][1] << endl;
}