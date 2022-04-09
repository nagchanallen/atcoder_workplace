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
int N, K, A[400005];
map<int, int> mp, mp2;

int main() {
    cin >> N >> K;
    rep1(i, N) {
        cin >> A[i];
    }
    int mini = A[0];
    rep1(i, K) {
        mp[A[i]] = i;
        mini = min(A[i], mini);
    }

    int temp = 0;
    for (auto i = mp.begin(); i != mp.end(); ++i) {
        auto [key, value] = *i;
        // cout << key << " " << value << endl;
        if (value > temp) {
            mp2[key] = value;
            temp = value;
        } else {
            mp2[key] = temp;
        }
    }

    int ans = INTINF;

    for (int i = K + 1; i <= N; ++i) {
        if (A[i] > mini) {
            auto pt = mp.lower_bound(A[i]);
            if (pt == mp.begin()) {
                continue;
            } else {
                auto [key, value] = *--pt;
                ans = min(ans, i - mp2[key]);
            }
        }
    }

    if (ans == INTINF) {
        cout << -1 << endl;
    } else {
        cout << ans << endl;
    }
}