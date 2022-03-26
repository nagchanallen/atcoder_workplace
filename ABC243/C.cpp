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
int N, X[200005], Y[200005];
string S;
unordered_map<int, int> maxi, mini;

int main() {
    cin >> N;
    rep0(i, N) {
        cin >> X[i] >> Y[i];
    }
    cin >> S;
    rep0(i, N) {
        if (S[i] == 'R') {
            // min of R
            if (mini.count(Y[i]) == 0) {
                mini[Y[i]] = X[i];
            } else {
                mini[Y[i]] = min(mini[Y[i]], X[i]);
            }
        } else {
            // max of L
            if (maxi.count(Y[i]) == 0) {
                maxi[Y[i]] = X[i];
            } else {
                maxi[Y[i]] = max(maxi[Y[i]], X[i]);
            }
        }
    }
    for (auto [y, x]: maxi) {
        if (mini.count(y) > 0) {
            int l = x;
            int r = mini[y];
            if (r < l) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;
}