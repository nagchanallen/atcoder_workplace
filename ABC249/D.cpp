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
ll N, A[200005];
unordered_set<ll> st;

int main() {
    cin >> N;
    rep0(i, N) {
        cin >> A[i];
        st.insert(A[i]);
    }

    sort(A, A + N);

    ll cnt = 0;

    for (int q = 0; q < N; ++q) {
        ll target = A[q];
        ll t_cnt = upper_bound(A, A + N, target) - lower_bound(A, A + N, target);
        for (int i = 1; i * i <= target; ++i) {
            if (target % i == 0) {
                ll a = i, b = target / i;
                ll cnt_a = upper_bound(A, A + N, a) - lower_bound(A, A + N, a);
                ll cnt_b = upper_bound(A, A + N, b) - lower_bound(A, A + N, b);
                ll r_cnt = (cnt_a * cnt_b * (ll)2);
                if (a == b) {
                    r_cnt /= 2;
                }
                cnt += r_cnt;
            }
        }
    }
    cout << cnt << endl;
}