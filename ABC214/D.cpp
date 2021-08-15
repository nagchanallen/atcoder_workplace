#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

vector<pair<int, pair<int, int>>> E;
// global variables
int N;
ll ans = 0;

int main() {
    // input
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--; v--;
        E.push_back(make_pair(w, make_pair(u, v)));
    }
    // solve
    sort(E.begin(), E.end());
    dsu d(N);
    for(auto e: E) {
        ll x = d.size(e.second.first);
        ll y = d.size(e.second.second);
        ll w = e.first;
        ans += (x * y) * w;
        d.merge(e.second.first, e.second.second);
    }
    // output
    cout << ans << endl;
}