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
int N, K;
ll A[200005];
int main() {
    // input
    cin >> N >> K;
    rep0(i, N) cin >> A[i];
    // solve
    ll lo = 0, hi = 2e18 / K;
    while (lo + 1 < hi) {
        ll mid = (lo + hi) / 2;
        ll sum = 0;
        rep0(i, N) sum += min(A[i], mid - 1);
        if (K * (mid - 1) <= sum) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    cout << lo - 1 << endl;
}