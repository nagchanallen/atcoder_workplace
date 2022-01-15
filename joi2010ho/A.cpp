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
int n, m, s[100005], a[100005], S[100005];

int main() {
    cin >> n >> m;
    for (int i = 1; i <= n - 1; ++i) {
        cin >> s[i];
    }
    for (int i = 1; i <= m; ++i) {
        cin >> a[i];
    }
    S[1] = 0;
    for (int i = 1; i <= n - 1; ++i) {
        S[i + 1] = S[i] + s[i];
    }
    long long distance = 0, current = 1;
    for (int i = 1; i <= m; ++i) {
        distance += abs(S[current + a[i]] - S[current]) % 100000;
        current += a[i];
    }
    cout << distance % 100000 << endl;
}