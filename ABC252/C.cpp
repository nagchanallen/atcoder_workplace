#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int N;
string S[200];
unordered_map<char, int> mp;
vector<bool> done;

int main() {
    cin >> N;
    rep1(i, N) {
        cin >> S[i];
    }

    string s = "0123456789";
    int ans = N * 10;

    for (char c: s) {
        done.assign(N + 1, false);
        int cnt = 0;
        for (int i = 0; i < N * 10; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (!done[j] && S[j][i % 10] == c) {
                    done[j] = true;
                    cnt++;
                    break;
                }
            }
            if (cnt == N) {
                ans = min(ans, i);
                break;
            }
        }
    }
    cout << ans << endl;
}