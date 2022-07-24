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
ll N, x[3005], y[3005], r[3005], sx, sy, tx, ty;

bool is_connected (ll x1, ll y1, ll r1, ll x2, ll y2, ll r2) {
    ll d2 = abs(x1 - x2) * abs(x1 - x2) + abs(y1 - y2) * abs(y1 - y2);
    if (x1 == x2 && y1 == y2 && r1 == r2) return true;
    return (!(x1 == x2 && y1 == y2) && (r1 + r2) * (r1 + r2) >= d2);
}

int main() {
    cin >> N;
    cin >> sx >> sy >> tx >> ty;
    
    dsu d(N + 1);
    int sp, tp = 0;

    rep1(i, N) {
        cin >> x[i] >> y[i] >> r[i];
        if (abs(sx - x[i]) * abs(sx - x[i]) + abs(sy - y[i]) * abs(sy - y[i]) == r[i] * r[i]) {
            sp = i;
        }
        if (abs(tx - x[i]) * abs(tx - x[i]) + abs(ty - y[i]) * abs(ty - y[i]) == r[i] * r[i]) {
            tp = i;
        }
    }

    rep1(i, N) rep1(j, N) {
        if (is_connected(x[i], y[i], r[i], x[j], y[j], r[j])) {
            d.merge(i, j);
        }
    }

    if (sp == tp || d.same(sp, tp)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}