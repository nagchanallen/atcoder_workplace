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
int A[100][100], H, W;

int main() {
    // input
    cin >> H >> W;
    rep1(i, H) rep1(j, W) cin >> A[i][j];
    // solve
    bool ok = true;
    for (int i1 = 1; i1 <= H - 1; ++i1) {
        for (int i2 = i1 + 1; i2 <= H; ++i2) {
            for (int j1 = 1; j1 <= W - 1; ++j1) {
                for (int j2 = j1 + 1; j2 <= W; ++j2) {
                    if (A[i1][j1] + A[i2][j2] > A[i2][j1] + A[i1][j2]) ok = false;
                }
            }
        }
    }
    if (ok) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}