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
int L1, R1, L2, R2;

int main() {
    cin >> L1 >> R1 >> L2 >> R2;
    int cnt = 0;
    for (int i = 0; i <= 100; ++i) {
        if (i >= L1 && i <= R1 && i >= L2 && i <= R2) cnt++;
    }
    cout << max(cnt - 1, 0) << endl;
}