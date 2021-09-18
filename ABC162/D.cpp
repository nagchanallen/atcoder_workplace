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
ll N, ans = 0;
string S;

int main() {
    // input
    cin >> N;
    cin >> S;    
    // solve
    vector<int> r, g, b;
    rep0(i, N) {
        if (S[i] == 'R') r.push_back(i);
        if (S[i] == 'G') g.push_back(i);
        if (S[i] == 'B') b.push_back(i);
    }
    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            ll num = 0;
            if ((S[i] == 'R' && S[j] == 'B') || (S[i] == 'B' && S[j] == 'R')) {
                num = lower_bound(g.begin(), g.end(), j) - g.begin();
                num = g.size() - num;
                if (binary_search(g.begin(), g.end(), j + j - i)) num--;
                if (lower_bound(g.begin(), g.end(), j) == g.end()) {
                    num = 0;
                }
            }
            if ((S[i] == 'G' && S[j] == 'B') || (S[i] == 'B' && S[j] == 'G')) {
                num = lower_bound(r.begin(), r.end(), j) - r.begin();
                num = r.size() - num;
                if (binary_search(r.begin(), r.end(), j + j - i)) num--;
                if (lower_bound(r.begin(), r.end(), j) == r.end()) {
                    num = 0;
                }
            }
            if ((S[i] == 'R' && S[j] == 'G') || (S[i] == 'G' && S[j] == 'R')) {
                num = lower_bound(b.begin(), b.end(), j) - b.begin();
                num = b.size() - num;
                if (binary_search(b.begin(), b.end(), j + j - i)) num--;
                if (lower_bound(b.begin(), b.end(), j) == b.end()) {
                    num = 0;
                }
            }
            ans += num;
        }
    }
    // output
    cout << ans << endl;
}