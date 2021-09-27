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
ll ans = 0;

int main() {
    // input
    cin >> N >> M;
    priority_queue<pair<ll, ll>> pq;
    rep0(i, N) {
        ll A; cin >> A;
        pq.push(make_pair(A, 1));
    }
    // solve
    rep0(i, M) {
        ll B, C; cin >> B >> C;
        pq.push(make_pair(C, B));
    }
    while (N > 0) {
        auto p = pq.top(); pq.pop();
        if (p.second > N) {
            ans += (N * p.first);
            N = 0;
            break;
        } else {
            N -= p.second;
            ans += (p.second * p.first);
        }
    }
    // output
    cout << ans << endl;
}