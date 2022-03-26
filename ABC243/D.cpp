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
ll N, X;
string S;

int main() {
    cin >> N >> X;
    cin >> S;
    deque<int> dq;
    while (X > 0) {
        if (X % 2 == 0) {
            dq.push_front(0);
        } else {
            dq.push_front(1);
        }
        X /= 2;
    }
    // bitset<500205> bs(X);
    for (int i = 0; i < N; ++i) {
        if (S[i] == 'U') {
            dq.pop_back();
        } else if (S[i] == 'L') {
            dq.push_back(0);
        } else {
            dq.push_back(1);
        }
    }
    ll ans = 0, cnt = 0;
    while (!dq.empty()) { 
        int cur = dq.back();
        if (cur == 1) {
            ans += ((ll)1 << cnt);
        }
        cnt++;
        dq.pop_back();
    }
    cout << ans << endl;
}