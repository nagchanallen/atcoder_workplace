#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define rep1(i, n) for (ll i = 1; i <= (ll)(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
ll N, M, B[10005][10];

int main() {
    // input
    cin >> N >> M;
    // solve
    rep1(i, N) rep1(j, M) cin >> B[i][j];
    
    bool ok = true;
    ll init = B[1][1];
    if (init % 7 != 0 && init % 7 - 1 + M > 7) ok = false;
    if (init % 7 == 0 && M > 1) ok = false;
    rep1(i, N) {
        rep1(j, M) {
            if (init + (j - 1) + 7 * (i - 1) != B[i][j]) ok = false;
        }
    }
    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}