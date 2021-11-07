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
int N, K, A[200005];

int main() {
    // input
    cin >> N >> K;
    rep0(i, N) cin >> A[i];
    // solve
    sort(A, A + N, greater<int>());
    double lo = 0, hi = A[0];
    while (abs(hi - lo) > 0.000001) {
        double mid = (lo + hi) / 2;
        int cnt = 0;
        for (int i = 0; i < N; ++i) {
            cnt += ceil(A[i] / mid) - 1;
        }
        if (cnt > K) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    cout << (int)ceil(lo) << endl;
}