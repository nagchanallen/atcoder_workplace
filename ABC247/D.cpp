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
deque<pair<ll, ll>> dq;
// {label, cnt}

int main() {
    cin >> Q;
    rep0(q, Q) {
        int query; cin >> query;
        if (query == 1) {
            ll x, c;
            cin >> x >> c;
            if (dq.empty()) {
                dq.push_back({x, c});
            } else {
                auto [label, cnt] = dq.back();
                if (label == x) {
                    dq.pop_back();
                    dq.push_back({label, c + cnt});
                } else {
                    dq.push_back({x, c});
                }
            }
        } else {
            ll c;
            cin >> c;
            ll sum = 0;
            while (c > 0) {
                auto [label, cnt] = dq.front();
                // cout << label << " " << cnt << endl;
                if (c >= cnt) {
                    sum += (label * cnt);
                    dq.pop_front();
                    c -= cnt;
                } else {
                    sum += (label * c);
                    dq.pop_front();
                    dq.push_front({label, cnt - c});
                    c = 0;
                }
            }
            cout << sum << endl;
        }
    }
}