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
int N, M, s[15][15], p[15], k[15];

int main() {
    // input
    cin >> N >> M;
    for (int i = 1; i <= M; ++i) {
        cin >> k[i];
        for (int j = 1; j <= k[i]; ++j) {
            cin >> s[i][j];
        }
    }
    for (int i = 1; i <= M; ++i) cin >> p[i];
    // solve
    int ans = 0;
    for (int bit = 0; bit < (1 << N); ++bit) {
        bool ok = true;
        for (int i = 1; i <= M; ++i) {
            int cnt = 0;
            for (int j = 1; j <= k[i]; ++j) {
                if (bit & (1 << (s[i][j] - 1))) {
                    cnt++;
                }
            }
            if (cnt % 2 != p[i]) ok = false;
        }
        if (ok) ans++;
    }
    // output
    cout << ans << endl;
}