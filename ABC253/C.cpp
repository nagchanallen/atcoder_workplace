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
map<int, int> mp;
int Q;

int main() {
    cin >> Q;
    rep0(q, Q) {
        int query; cin >> query;
        if (query == 1) {
            int x; cin >> x;
            mp[x]++;
        } else if (query == 2) {
            int x, c; cin >> x >> c;
            if (mp.find(x) != mp.end()) {
                mp[x] -= min(c, mp[x]);
                if (mp[x] == 0) {
                    mp.erase(x);
                }
            }
        } else {
            auto [maxi, f] = *--mp.end();
            auto [mini, g] = *mp.begin();
            cout << maxi - mini << endl;
        }
    }
}