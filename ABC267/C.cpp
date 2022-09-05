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
ll N, M;
ll A[200005];

int main() {
    cin >> N >> M;
    rep1(i, N) {
        cin >> A[i];
    }

    ll maxi = 0;
    ll w_sum = 0;
    ll no_w_sum = 0;
    for (ll i = 1; i <= M; ++i) {
        no_w_sum += A[i];
        w_sum += (i * A[i]);
    }

    maxi = w_sum;

    for (ll i = M + 1; i <= N; ++i) {
        w_sum = w_sum - no_w_sum + M * A[i];
        maxi = max(maxi, w_sum);
        no_w_sum = no_w_sum - A[i - M] + A[i];
    }

    cout << maxi << endl;
}