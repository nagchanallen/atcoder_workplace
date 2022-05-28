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
ll N, T[100005], A[100005];

ll ctz(ll x) {
    ll cnt = 0;
    while (x % (ll)2 == (ll)0) {
        cnt++;
        x /= (ll)2;
    }
    return cnt;
}

int main() {
    cin >> N;
    rep1(i, N) cin >> T[i];

    ll cur = 0;

    T[0] = 0;

    rep1(i, N) {
        cur++;
        if (ctz(cur) == T[i]) {
            A[i] = cur;
        } else {
            ll temp = (ll)1 << T[i], temp2 = (cur >> T[i]);
            if (cur < temp) {
                A[i] = temp;
            } else {
                ll r = cur % temp;
                cur -= r;
                cur = cur >> T[i];
                while (cur <= temp2 || cur % (ll)2 == (ll)0) {
                    cur++;
                }
                A[i] = (cur << T[i]);
            }
        }
        cur = A[i];
    }
    cout << A[N] << endl;
}