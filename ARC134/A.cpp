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
ll N, L, W, a[100005];

int main() {
    cin >> N >> L >> W;
    rep0(i, N) cin >> a[i];
    a[N] = L;
    ll right = 0, cnt = 0;
    rep0(i, N + 1) {
        if (a[i] - right > 0) {
            cnt += (a[i] - right) / W;
            if ((a[i] - right) % W != 0) cnt++;
        }
        right = max(right, a[i] + W);
    }
    cout << cnt << endl;
}