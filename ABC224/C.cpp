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
ll N, X[400], Y[400], res = 0;

int main() {
    // input
    cin >> N;
    rep0(i, N) cin >> X[i] >> Y[i];
    // solve
    for (int i = 0; i < N - 2; ++i) {
        for (int j = i + 1; j < N - 1; ++j) {
            for (int k = j + 1; k < N; ++k) {
                if ((Y[k] - Y[i]) * (X[j] - X[i]) != (Y[j] - Y[i]) * (X[k] - X[i])) {
                    res++;
                }
            }
        }
    }
    cout << res << endl;
}