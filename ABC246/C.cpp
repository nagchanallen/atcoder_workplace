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
ll N, K, X, A[200005];
multiset<ll> ms;

int main() {
    cin >> N >> K >> X;
    rep1(i, N) {
        cin >> A[i];
        ll p = A[i];
        if (A[i] >= X && K > 0) {
            ll used = min(p / X, K);
            K -= used;
            p -= X * used;
        }
        ms.insert(p);
    }
    ll sum = 0;
    for (auto i = ms.rbegin(); i != ms.rend(); i++) {
        if (K > 0) {
            K--;
        } else {
            sum += *i;
        }
    }
    cout << sum << endl;
}