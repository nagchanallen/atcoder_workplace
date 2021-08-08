#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

ll N;
ll H[100005], S[100005];

bool ok(ll target, ll N) {
    vector<ll> sec;
    rep0(i, N) {
        if ((target - H[i]) < 0) {
            sec.push_back(-1);
        } else {
            sec.push_back((target - H[i]) / S[i]);
        }
    }
    sort(sec.begin(), sec.end());
    rep0(i, N) {
        // if takahashi could not shot one of the ship within i seconds
        if (sec[i] < i) {
            return false;
        }
    }
    return true;
}

int main() {
    cin >> N;
    rep0(i, N) cin >> H[i] >> S[i];

    ll lo = 0; ll hi = LLINF;
    while (lo + 1 < hi) {
        ll mid = (lo + hi) / 2;
        if (ok(mid - 1, N)) {
            hi = mid;
        } else {
            lo = mid;
        }
    }
    cout << lo << endl;
}