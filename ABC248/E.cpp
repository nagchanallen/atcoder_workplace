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
ll N, K, X[400], Y[400];
ll ans = 0;
map<pair<ll, ll>, vector<pair<ll, ll>>> mp;

// vector<pair<ll, ll>> temp[400];

int main() {
    cin >> N >> K;
    rep1(i, N) {
        cin >> X[i] >> Y[i];
    }

    if (K == 1) {
        cout << "Infinity" << endl;
        return 0;
    }
    for (int i = 1; i <= N; ++i) {
        for (int j = i + 1; j <= N; ++j) {
            pair<ll, ll> m1 = {Y[j] - Y[i], X[j] - X[i]};
            bool ok = true;
            for (auto [m_y, m_x]: mp[{X[i], Y[i]}]) {
                if (m_y * m1.second == m_x * m1.first) {
                    ok = false;
                }
            }
            if (!ok) continue;

            mp[{X[i], Y[i]}].push_back(m1);
            mp[{X[j], Y[j]}].push_back(m1);

            ll cnt = 2;
            for (int k = j + 1; k <= N; ++k) {
                pair<ll, ll> m2 = {Y[k] - Y[i], X[k] - X[i]};
                if (m1.first * m2.second == m1.second * m2.first) {
                    mp[{X[k], Y[k]}].push_back(m2);
                    cnt++;
                }
            }
            if (cnt >= K) {
                ans++;
            }
        }
    }

    cout << ans << endl;
}