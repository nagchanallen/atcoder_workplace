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
int A, B, C;

int main() {
    // input
    cin >> A >> B >> C;
    // solve
    rep1(i, 1000) {
        if (C * i >= A && C * i <= B) {
            cout << C * i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
}