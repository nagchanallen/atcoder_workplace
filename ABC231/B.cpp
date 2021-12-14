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
int N;
unordered_map<string, int> has;

int main() {
    cin >> N;
    rep0(i, N) {
        string S; cin >> S;
        has[S]++;
    }
    string ans = ""; int maxi = 0;
    for (auto [key, val]: has) {
        if (val > maxi) {
            maxi = val;
            ans = key;
        }
    }
    cout << ans << endl;
}