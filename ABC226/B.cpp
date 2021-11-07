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
int N, cnt = 0;
set<vector<int>> a;
int L[200005];

int main() {
    // input
    cin >> N;
    rep0(i, N) {
        cin >> L[i];
        vector<int> v(L[i]);
        rep0(j, L[i]) {
            cin >> v[j];
        }
        a.insert(v);
    }
    // solve
    cout << a.size() << endl;
}