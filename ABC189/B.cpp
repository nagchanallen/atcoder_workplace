#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

ll N, X, V[1005], P[1005];

int main() {
    cin >> N >> X;
    X *= 100;
    rep1(i, N) cin >> V[i] >> P[i];
    int cnt = -1;
    rep1(i, N) {
        ll amount = V[i] * P[i];
        if (X - amount < 0) {
            cnt = i;
            break;
        } else {
            X -= amount;
        }
    }
    cout << cnt << endl;
}