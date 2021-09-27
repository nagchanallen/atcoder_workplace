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
int N, ans = 0;

int main() {
    // input
    cin >> N;
    set<pair<int, int>> s;
    rep1(i, N) {
        int a; cin >> a;
        if (s.count(make_pair(i, a))) {
            ans++;
        } else {
            s.insert(make_pair(a, i));
        }
    }
    cout << ans << endl;
}