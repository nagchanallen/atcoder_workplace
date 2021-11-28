#include <iostream>
#include <string>
using namespace std;

int N;
long long dp[100005][10], D = 1e9 + 7;
string S;

int main() {
    cin >> N; cin >> S;
    string T = "atcoder";
    for (int i = 0; i <= N; ++i) dp[i][0] = 1;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= 7; ++j) {
            if (S[i - 1] == T[j - 1]) {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % D;
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[N][7] % D << endl;
}