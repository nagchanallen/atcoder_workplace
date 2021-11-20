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
ll N;
multiset<ll> p;
set<ll> p2;

int main() {
    // input
    cin >> N;
    ll ans = 0;
    // solve
    for (ll i = 1; i * i * i <= N; ++i) {
        for (ll j = i; j * j <= N; ++j) {
            ll k = (N / (i * j));
            if (k >= j) {
                ans += (k - j + 1);
            } else {
                break;
            }
        }
    }
    cout << ans << endl;
}