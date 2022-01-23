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
ll N, X, cnt = 0;
vector<vector<ll>> v;

void dfs(ll row, ll col, ll x) {
    if (row == N || col == v[row].size()) return;
    if (x % v[row][col] == 0) {
        if (x / v[row][col] == 1 && row == N - 1) {
            cnt++;
        } else {
            dfs(row + 1, 0, x / v[row][col]);
        }
    }
    dfs(row, col + 1, x);
}

int main() {
    cin >> N >> X;
    v.resize(N);
    for (ll i = 0; i < N; ++i) {
        ll L; cin >> L;
        for (ll j = 0; j < L; ++j) {
            ll a; cin >> a;
            v[i].push_back(a);
        }
    }
    dfs(0, 0, X);
    cout << cnt << endl;
}