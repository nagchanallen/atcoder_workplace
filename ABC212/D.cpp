#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

int Q;
ll acc = 0;
priority_queue<ll, vector<ll>, greater<ll>> pq;
int main() {
    cin >> Q;
    rep0(i, Q) {
        ll P, X;
        cin >> P;
        if (P == 1 || P == 2) cin >> X;
        if (P == 1) pq.push(X - acc);
        if (P == 2) acc += X;
        if (P == 3) {
            ll ans = pq.top() + acc;
            cout << ans << endl;
            pq.pop();
        }
    }
}