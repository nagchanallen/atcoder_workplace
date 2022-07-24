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
ll N, K, a[300005], ans[300005];
multiset<ll> s;

int main() {
    cin >> N >> K;
    rep1(i, N) cin >> a[i];

    for (int i = 0; i < K; ++i) {
        s = multiset<ll>();
        for (int j = 1 + i; j <= N; j += K) {
            s.insert(a[j]);
        }
        auto t = s.begin();
        for (int j = 1 + i; j <= N; j += K) {
            ans[j] = *t;
            // cout << i << " " << j << " " << ans[j] << endl;
            t++;
        }
    }

    int cur = 0;
    for (int i = 1; i <= N; ++i) {
        if (ans[i] < cur) {
            cout << "No" << endl;
            return 0;
        }
        cur = ans[i];
    }
    cout << "Yes" << endl;
}