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
string X;
ll ans[1000000];
ll S[500005];
int main() {
    cin >> X;
    S[0] = 0;
    for (int i = 0; i < X.length(); ++i) {
        S[i + 1] = S[i] + (X[i] - '0');
    }
    ll temp = 0;
    ll pos = X.length();
    int j = 0;
    while (temp > 0 || pos > 0) {
        if (pos >= 0) temp += S[pos];
        ans[j] = temp % 10;
        temp /= 10;
        pos--;
        j++;
    }
    for (int i = j - 1; i >= 0; --i) cout << ans[i];
    cout << endl;
}