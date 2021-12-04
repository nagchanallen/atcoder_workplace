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
ll N, A, B, P, Q, R, S;

int main() {
    cin >> N >> A >> B;
    cin >> P >> Q >> R >> S;
    ll k1min = max(1 - A, 1 - B);
    ll k1max = min(N - A, N - B);
    ll k2min = max(1 - A, B - N);
    ll k2max = min(N - A, B - 1);
    for (ll i = P; i <= Q; ++i) {
        for (ll j = R; j <= S; ++j) {
            if ((A + k1min <= i && i <= A + k1max) &&
                (B + k1min + i - (A + k1min) == j)) {
                    cout << '#';
            } else if ((A + k2min <= i && i <= A + k2max) &&
                (B - k2max - (i - (A + k2max)) == j)) {
                    cout << '#';
                } else {
                    cout << '.';
                }
        }
        cout << endl;
    }
}