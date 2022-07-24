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
ll N, ans = 0;
vector<ll> st;

int main() {
    cin >> N;
    for (ll i = 1; i * i <= N; ++i) {
        st.push_back(i * i);
    }
    for (ll i = 1; i <= N; ++i) {
        if (binary_search(st.begin(), st.end(), i)) {
            ans += (ll)st.size();
        } else {
            ll target = 1, temp = i;
            for (ll k = 2; k * k <= i; ++k) {
                ll ind = 0;
                while (temp % k == 0) {
                    ind++;
                    temp /= k;
                }
                if (ind % 2 != 0) {
                    target *= k;
                }
            }
            if (temp != 1) {
                target *= temp;
            }
            if (target > N) continue;
            ans++;
            ll cnt = upper_bound(st.begin(), st.end(), N / target) - st.begin();
            ans += (cnt - (ll)1);
        }
    }
    cout << ans << endl;
}