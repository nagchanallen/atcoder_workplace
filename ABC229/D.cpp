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
string S;
int K, cnt[200005];

int main() {
    // input
    cin >> S; cin >> K;    
    // solve
    cnt[0] = 0;
    rep1(i, S.length()) {
        if (S[i - 1] == '.') {
            cnt[i] = cnt[i - 1] + 1;
        } else {
            cnt[i] = cnt[i - 1];
        }
    }
    int maxi = 0;
    for (int i = 0; i + K < S.length(); ++i) {
        int r = upper_bound(cnt + 1, cnt + S.length() + 1, cnt[i] + K) - cnt - 1;
        maxi = max(maxi, r - i);
    }
    cout << maxi << endl;
}