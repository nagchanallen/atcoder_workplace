#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int m, n;
vector<pair<int,int>> M, N;

int main() {
    // input
    cin >> m;
    rep0(i, m) {
        int x, y;
        cin >> x >> y;
        M.push_back(make_pair(x, y));
    }
    cin >> n;
    rep0(i, n) {
        int x, y;
        cin >> x >> y;
        N.push_back(make_pair(x, y));
    }
    // solve
    vector<set<pair<int,int>>> temp(m);
    rep0(i, n) {
        int dx = N[i].first - M[0].first;
        int dy = N[i].second - M[0].second;
        temp[0].insert(make_pair(dx, dy));
    }
    rep1(i, m - 1) {
        rep0(j, n) {
            int dx = N[j].first - M[i].first;
            int dy = N[j].second - M[i].second;
            if (temp[i - 1].find(make_pair(dx, dy)) != temp[i - 1].end()) {
                temp[i].insert(make_pair(dx, dy));
            }
        }
    }
    // output
    auto p = *temp[m - 1].begin();
    cout << p.first << ' ' << p.second << endl;
}