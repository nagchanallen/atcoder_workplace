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
int N, R, D[200], A[200];

int main() {
    cin >> N >> R;
    rep1(i, N) {
        cin >> D[i] >> A[i];
    }

    int curr = R;
    rep1(i, N) {
        if (D[i] == 1) {
            if (curr >= 1600 && curr <= 2799) {
                curr += A[i];
            }
        } else if (D[i] == 2) {
            if (curr >= 1200 && curr <= 2399) {
                curr += A[i];
            }
        }
    }

    cout << curr << endl;
}