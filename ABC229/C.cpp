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
ll N, W;
vector<pair<ll,ll>> cheese;

int main() {
    // input
    cin >> N >> W;
    rep1(i, N) {
        ll A, B; cin >> A >> B;
        cheese.push_back({A, B});
    }
    // solve
    sort(cheese.begin(), cheese.end(), greater<pair<ll,ll>>());
    ll cnt = 0;
    for (auto c: cheese) {
        while (W == 0) break;
        ll temp = min(W, c.second);
        cnt += (temp * c.first);
        W -= temp;
    }
    cout << cnt << endl;
}