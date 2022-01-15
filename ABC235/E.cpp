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
int N, M, Q;
vector<pair<int, pair<int, pair<int, int>>>> edges;

vector<int> f;

int find(int x) {
    if (f[x] == -1 || f[x] == x) {
        return x;
    }
    f[x] = find(f[x]);
    return f[x];
}

void merge(int x, int y) {
    f[find(x)] = find(y);
}

bool same(int x, int y) {
    return (find(x) == find(y));
}

int main() {
    cin >> N >> M >> Q;
    vector<bool> ans(Q + 1, false);
    f.assign(N, -1);
    for (int i = 0; i < M; ++i) {
        int a, b, c; cin >> a >> b >> c;
        a--; b--;
        edges.push_back({c, {a, {b, 0}}});
    }
    for (int i = 1; i <= Q; ++i) {
        int u, v, w; cin >> u >> v >> w;
        u--; v--;
        edges.push_back({w, {u, {v, i}}});
    }
    sort(edges.begin(), edges.end());
    for (auto e: edges) {
        if (!same(e.second.first, e.second.second.first)) {
            if (e.second.second.second == 0) {
                merge(e.second.first, e.second.second.first);
            } else {
                ans[e.second.second.second] = true;
            }
        }
    }
    for (int i = 1; i <= Q; ++i) {
        if (ans[i]) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}