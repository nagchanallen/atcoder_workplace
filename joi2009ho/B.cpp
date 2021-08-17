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

// global variables
ll ans = 0;
int D, N, M, d[100005], k[10005];
int main() {
    // input
    cin >> D; cin >> N; cin >> M;
    d[0] = 0;
    d[N] = D;
    for (int i = 1; i < N; ++i) cin >> d[i];
    rep0(i, M) cin >> k[i];
    // solve
    sort(d, d + (N + 1));
    rep0(i, M) {
        int up = lower_bound(d, d + N, k[i]) - d;
        if (up == 0) continue;
        int down = up - 1;
        ans += min(abs(d[up] - k[i]), abs(d[down] - k[i]));
    }
    // output
    cout << ans << endl;
}