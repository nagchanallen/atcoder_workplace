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
int N, M, x[1000], y[1000], ans = 1;
set<pair<int, int>> s;

int main() {
    // input
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> x[i] >> y[i];
        --x[i]; --y[i];
        s.insert(make_pair(min(x[i], y[i]), max(x[i], y[i])));
    } 
    // solve
    for (int i = 0; i < (1 << N); ++i) {
        vector<int> v;
        for (int j = 0; j < N; ++j) {
            if (i & (1 << j)) {
                v.push_back(j);
            }
        }
        sort(v.begin(), v.end());
        bool ok = true;
        for (int m = 0; m < max(int(v.size()) - 1, 0); ++m) {
            for (int n = m + 1; n < v.size(); ++n) {
                if (s.count({v[m], v[n]}) == 0) ok = false;
            }
        }
        if (ok) ans = max(ans, int(v.size()));
    }
    // output
    cout << ans << endl;
}