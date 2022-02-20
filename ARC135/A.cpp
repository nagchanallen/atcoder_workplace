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
ll X;
using mint = modint998244353;
unordered_map<ll, mint> dp;

mint helper(ll temp) {
    if (dp.count(temp) > 0) return dp[temp];
    ll A, B;
    if (temp % 2 == 0) {
        A = temp / 2; B = temp / 2;
    } else {
        A = temp / 2 + 1; B = temp / 2;
    }
    if (log ((long double)A ) + log((long double) B) > log ((long double) temp)) {
        dp[temp] = helper(A) * helper(B);
    } else {
        dp[temp] = temp;
    }
    return dp[temp];
}

int main() {
    cin >> X;
    mint pro = helper(X);
    cout << pro.val() << endl;
}