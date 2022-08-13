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
int H1, W1, A[15][15], H2, W2, B[15][15];
vector<int> h_v, w_v;

int main() {
    cin >> H1 >> W1;
    rep0(i, H1) rep0(j, W1) {
        cin >> A[i][j];
    }

    cin >> H2 >> W2;
    rep0(i, H2) rep0(j, W2) {
        cin >> B[i][j];
    }

    for (int i = 0; i < (1 << H1); ++i) {
        for (int j = 0; j < (1 << W1); ++j) {
            h_v = vector<int>();
            for (int k = 0; k < H1; ++k) {
                if (i & (1 << k)) {
                    continue;
                } else {
                    h_v.push_back(k);
                }
            }
            if (h_v.size() != H2) continue;

            w_v = vector<int>();
            for (int k = 0; k < W1; ++k) {
                if (j & (1 << k)) {
                    continue;
                } else {
                    w_v.push_back(k);
                }
            }

            if (w_v.size() != W2) continue;

            bool ok = true;

            rep0(m, H2) rep0(n, W2) {
                if (A[h_v[m]][w_v[n]] != B[m][n]) {
                    ok = false;
                }
            }

            if (ok) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
}