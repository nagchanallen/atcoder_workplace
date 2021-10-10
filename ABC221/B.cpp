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
    // input
    cin >> S;
    cin >> T;    
    // solve
    if (S == T) {
        cout << "Yes" << endl;
        return 0;
    }
    for (int i = 0; i < S.length() - 1; ++i) {
        swap(S[i], S[i + 1]);
        if (S == T) {
            cout << "Yes" << endl;
            return 0;
        }
        swap(S[i], S[i + 1]);
    }
    cout << "No" << endl;
}