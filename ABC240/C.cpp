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
int N, X, a[200], b[200];
bool can[105][10300];

int main() {
    cin >> N >> X;
    rep1(i, N) cin >> a[i] >> b[i];
    rep0(i, N) rep0(j, 10200) can[i][j] = false;
    can[0][0] = true;
    rep1(i, N) rep0(j, 10100) {
        if (j - a[i] >= 0) {
            can[i][j] = can[i][j] || can[i - 1][j - a[i]];
        }
        if (j - b[i] >= 0) {
            can[i][j] = can[i][j] || can[i - 1][j - b[i]];
        }
    }
    if (can[N][X]) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}