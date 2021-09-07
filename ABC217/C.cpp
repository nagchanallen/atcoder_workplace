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
int N, p[200005];

int main() {
    // input
    cin >> N;
    rep1(i, N) cin >> p[i];
    // solve
    int ans[N + 1];
    rep1(i, N) ans[p[i]] = i;
    // output
    rep1(i, N) cout << ans[i] << ' ';
}