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
vector<ll> pv;
bool prime[1000000];

int main() {
    cin >> N;
    for (int i = 2; i <= 900000; ++i) prime[i] = true;
    for (int p = 2; p * p <= 900000; p++) {
        if (prime[p] == true) {
            for (int i = p * p; i <= 900000; i += p)
                prime[i] = false;
        }
    }
    for (int i = 2; i <= 900000; ++i) {
        if (prime[i]) pv.push_back(i);
    }

    ll ans = 0;
    for (int i = 1; i < pv.size(); ++i) {
        ll num = upper_bound(pv.begin(), pv.end(), N / (pv[i] * pv[i] * pv[i])) - pv.begin();
        ll num2 = lower_bound(pv.begin(), pv.end(), pv[i]) - pv.begin();
        ans += min(num, num2);
    }

    cout << ans << endl;
}