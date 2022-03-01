#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (ll i = 0; i < (ll)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
ll N, K, A[200005];
unordered_set<ll> st, st2;

int main() {
    cin >> N >> K;
    rep0(i, N) {
        cin >> A[i];
    }
    ll temp = 0;
    while (st.count(temp % N) == 0) {
        st.insert(temp % N);
        temp += A[temp % N];
    }
    // we find the starting point of cycle
    ll start = temp % N;
    
    ll cnt = start;
    ll num = 0;
    while (st2.count(cnt % N) == 0) {
        st2.insert(cnt % N);
        cnt += A[cnt % N];
        num += A[cnt % N];
    }

    ll ans = 0;
    ll k_cnt = K;
    while (ans % N != start && k_cnt > 0) {
        ans += A[ans % N]; 
        k_cnt--;
    }

    ans += k_cnt / (ll)st2.size() * num;
    k_cnt = k_cnt % (ll)st2.size();

    rep0(i, k_cnt) {
        ans += A[ans % N];
    }

    cout << ans << endl;
}