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
ll Q, N = 1 << 20, parent[1 << 20];

int find(int x) {
    if (parent[x] != x) {
        parent[x] = find(parent[x]);
    }
    return parent[x];
}

int main() {
    // input
    cin >> Q;
    // solve
    unordered_map<ll,ll> hash;
    rep0(i, N) {
        parent[i] = i;
    }
    rep0(q, Q) {
        int t; ll x; cin >> t >> x;
        if (t == 1) {
            int h = x % N;
            // find
            h = find(h);
            hash[h] = x;
            // merge
            parent[h] = parent[(h + 1) % N];
        } else {
            if (hash.find(x % N) == hash.end()) {
                cout << -1 << endl;
            } else {
                cout << hash[x % N] << endl;
            }
        }
    }

}