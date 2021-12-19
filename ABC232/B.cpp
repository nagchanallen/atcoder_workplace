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
string S, T;

int main() {
    cin >> S;
    cin >> T;
    for (int K = 0; K <= 26; ++K) {
        bool ok = true;
        for (int i = 0; i < S.length(); ++i) {
            if (((S[i] - 'a') + K) % 26 != (T[i] - 'a')) {
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