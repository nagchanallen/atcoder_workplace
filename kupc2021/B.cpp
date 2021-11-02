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
char G[505][505];

int main() {
    // input
    cin >> N;
    // solve
    rep1(i, N) rep1(j, N) G[i][j] = '.';
    for (int i = 2; i <= N; ++i) {
        if (i % 2 == 0) {
            for (int j = 1; j <= i - 1; j++) {
                G[i][j] = '#';
            }
        } else {
            for (int j = 1; j <= i - 1; j++) {
                G[j][i] = '#';
            }
        }
    }

    rep1(i, N) {
        rep1(j, N) {
            cout << G[i][j];
        }
        cout << endl;
    }
}