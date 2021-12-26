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
int X, Y;

int main() {
    cin >> X >> Y;
    if (Y - X <= 0) {
        cout << 0 << endl;
        return 0;
    }
    int ans = (Y - X) / 10;
    if ((Y - X) % 10 != 0) ans++;
    cout << ans << endl;
}