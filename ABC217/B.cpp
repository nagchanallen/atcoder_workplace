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
string S[5];
bool f[5];

int main() {
    // input
    cin >> S[1]; cin >> S[2]; cin >> S[3];
    // solve
    rep1(i, 3) {
        if (S[i] == "ABC") f[0] = true;
        if (S[i] == "ARC") f[1] = true;
        if (S[i] == "AGC") f[2] = true;
        if (S[i] == "AHC") f[3] = true;
    }
    // output
    rep0(i, 4) {
        if (!f[i] && i == 0) cout << "ABC" << endl;
        if (!f[i] && i == 1) cout << "ARC" << endl;
        if (!f[i] && i == 2) cout << "AGC" << endl;
        if (!f[i] && i == 3) cout << "AHC" << endl;
    }
}