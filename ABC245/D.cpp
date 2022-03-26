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
ll N, M, A[300], C[300], B[300];

int main() {
    cin >> N >> M;
    rep0(i, N + 1) cin >> A[i];
    rep0(i, N + M + 1) cin >> C[i];
    ll factor = 0;
    for (int i = 0; i < N; ++i) {
        if (A[i] != 0) {
            break;
        } else {
            factor++;
        }
    }
    for (int i = 0; i <= M; ++i) {
        ll temp = 0;
        for (int j = 0; j < i; ++j) {
            if (i + factor - j > N) {
                continue;
            }
            temp += (B[j] * A[i + factor - j]);
        }
        B[i] = (C[i + factor] - temp) / A[0 + factor];
    }
    for (int i = 0; i <= M; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;
}