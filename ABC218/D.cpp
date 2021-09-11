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
int N;
ll res = 0;
map<int, set<int>> PX;

int main() {
    // input
    cin >> N;
    for(int i = 0; i < N; ++i) {
        int x, y; cin >> x >> y;
        PX[x].insert(y);
    }
    // solve
    auto e = --PX.end();
    for (auto x = PX.begin(); x != e; ++x) {
        auto p1 = x; auto s1 = p1 -> second;
        auto temp = p1;
        for (auto p2 = ++temp; p2 != PX.end(); ++p2) {
            auto s2 = p2 -> second;
            vector<int> temp(2005);
            auto ls = set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), temp.begin());
            auto ans = (ls - temp.begin()) * (ls - temp.begin() - 1) / 2;
            res += ans;
        }
    }
    // output
    cout << res << endl;
}