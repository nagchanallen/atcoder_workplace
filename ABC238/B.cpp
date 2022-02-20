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
int N, A[500];

int main() {
    cin >> N;
    rep0(i, N) cin >> A[i];
    int cur = 0;
    vector<int> v;
    v.push_back(0);
    rep0(i, N) {
        cur = (cur + A[i]) % 360;
        v.push_back(cur);
    }
    v.push_back(360);
    sort(v.begin(), v.end());
    int ans = 1;
    for (int i = 1; i < v.size(); ++i) {
        ans = max(ans, v[i] - v[i - 1]);
    }
    cout << ans << endl;
}