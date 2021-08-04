#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

int N, S, D, X, Y;

int main() {
    cin >> N >> S >> D;
    bool can = false;
    rep0(i, N) {
        cin >> X >> Y;
        if (X < S && Y > D) can = true;
    }
    if (can) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}