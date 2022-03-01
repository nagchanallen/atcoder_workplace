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
int Q;
multiset<ll> st;

int main() {
    cin >> Q;
    rep0(q, Q) {
        ll que, x; cin >> que >> x;
        if (que == 1) {
            st.insert(x);
        } else if (que == 2) {
            ll k; cin >> k;
            auto pt = st.upper_bound(x);
            bool ok = true;
            for (ll i = 0; i < k; ++i) {
                if (pt == st.begin()) {
                    cout << -1 << endl;
                    ok = false;
                    break;
                }
                pt--;
            }
            if (!ok) continue;
            ll ans = *pt;
            cout << ans << endl;
        } else {
            ll k; cin >> k;
            auto pt = st.lower_bound(x);
            if (pt == st.end()) {
                cout << -1 << endl;
                continue;
            }
            bool ok = true;
            for (ll i = 0; i < k - 1; ++i) {
                pt++;
                if (pt == st.end()) {
                    cout << -1 << endl;
                    ok = false;
                    break;
                }
            }
            if (!ok) continue;
            ll ans = *pt;
            cout << ans << endl;
        }
    }
}