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
int N, Q, a[200005];
map<int,vector<int>> mp;

int main() {
    cin >> N >> Q;
    for (int i = 1; i <= N; ++i) {
        cin >> a[i];
        mp[a[i]].push_back(i);
    }
    for (int i = 0; i < Q; ++i) {
        int x, k; cin >> x >> k;
        if (mp.count(x) == 0 || mp[x].size() < k) {
            cout << -1 << endl;
        } else {
            cout << mp[x][k - 1] << endl;
        }
    }
}