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
int N, P;
int main() {
    // input
    cin >> N >> P;
    // solve
    int cnt = 0;
    rep0(i, N) {
        int a; cin >> a;
        if (a < P) cnt++;
    }
    cout << cnt << endl;
}