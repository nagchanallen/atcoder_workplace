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
string S, T = "";

int main() {
    cin >> S;
    for (int i = 0; i < 100000; ++i) {
        T += "oxx";
    }
    for (int i = 0; i + 10 - 1 < T.length(); ++i) {
        bool ok = true;
        for (int j = 0; j < S.length(); ++j) {
            if (S[j] != T[i + j]) {
                ok = false;
                break;
            }
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}