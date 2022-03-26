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
int A, B, C, D;

int main() {
    cin >> A >> B >> C >> D;
    if (A == C) {
        if (B <= D) {
            cout << "Takahashi" << endl;
        } else {
            cout << "Aoki" << endl;
        }
    } else if (A < C) {
        cout << "Takahashi" << endl;
    } else {
        cout << "Aoki" << endl;
    }
}