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
int S, T, X;

int main() {
    // input
    cin >> S >> T >> X;
    // solve
    int dur;
    if (T >= S) {
        dur = T - S;
    } else {
        dur = T + 24 - S;
    }
    for (int i = 0; i < dur; ++i) {
        if (X == (S + i) % 24) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}