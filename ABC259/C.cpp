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
string S, T;
vector<pair<char, int>> vs, vt;

int main() {
    cin >> S >> T;
    for (char s: S) {
        if (vs.size() == 0) {
            vs.push_back({s, 1});
        } else if (s == vs[vs.size() - 1].first) {
            vs[vs.size() - 1].second++;
        } else {
            vs.push_back({s, 1});
        }
    }

    for (char t: T) {
        if (vt.size() == 0) {
            vt.push_back({t, 1});
        } else if (t == vt[vt.size() - 1].first) {
            vt[vt.size() - 1].second++;
        } else {
            vt.push_back({t, 1});
        }
    }

    if (vs.size() != vt.size()) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 0; i < vs.size(); i++) {
        if (vs[i].first == vt[i].first && ((vs[i].second == 1 && vt[i].second == 1) || (vs[i].second > 1 && vt[i].second > 1 && vs[i].second <= vt[i].second))) {
            continue;
        } else {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
}