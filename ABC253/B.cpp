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
int H, W;
char S[200][200];
vector<pair<int, int>> v;

int main() {
    cin >> H >> W;
    rep1(i, H) rep1(j, W) {
        cin >> S[i][j];
        if (S[i][j] == 'o') {
            v.push_back({i, j});
        }
    }

    cout << abs(v[1].first - v[0].first) + abs(v[1].second - v[0].second) << endl;
}