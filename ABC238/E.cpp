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

int N, Q;

int main() {
    cin >> N >> Q;
    dsu d(N + 1);
    rep0(i, Q) {
        int l, r;
        cin >> l >> r;
        d.merge(l - 1, r);
    }
    if (d.same(0, N)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}