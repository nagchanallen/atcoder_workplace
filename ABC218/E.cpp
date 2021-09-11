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

struct edge {
    ll cost, u, v;
};

// global variables
int N, M;
ll sum = 0;
vector<edge> e;

bool comp(edge e1, edge e2) {
    return e1.cost < e2.cost;
}

int main() {
    // input
    cin >> N >> M;
    rep0(i, M) {
        ll A, B, C; cin >> A >> B >> C; --A; --B;
        sum += C;
        e.push_back(edge{C, A, B});
    }
    // solve
    sort(e.begin(), e.end(), comp);
    dsu d(N);
    ll res = 0;
    for (int i = 0; i < M; ++i) {
        edge ed = e[i];
        if (!d.same(ed.u, ed.v) || ed.cost < 0) {
            d.merge(ed.u, ed.v);
            res += ed.cost;
        }
    }
    // output
    cout << sum - res << endl;
}