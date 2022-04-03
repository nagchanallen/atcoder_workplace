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
int x[5], y[5];
map<int, int> mpx, mpy;

int main() {
    rep1(i, 3) {
        cin >> x[i] >> y[i];
        mpx[x[i]]++;
        mpy[y[i]]++;
    }
    pair<int, int> ans;
    for (auto [x, cnt]: mpx) {
        if (cnt % 2 == 1) {
            ans.first = x;
        }
    }
    for (auto [y, cnt]: mpy) {
        if (cnt % 2 == 1) {
            ans.second = y;
        }
    }
    cout << ans.first << " " << ans.second << endl;
}