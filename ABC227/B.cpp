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
int N, S[30];

int main() {
    // input
    cin >> N;
    rep0(i, N) cin >> S[i];    
    // solve
    set<int> s;
    rep1(a, 1000) rep1(b, 1000) {
        s.insert(4 * a * b + 3 * a + 3 * b);
    }
    int cnt = 0;
    rep0(i, N) {
        if (s.count(S[i]) == 0) cnt++;
    }
    cout << cnt << endl;
}