#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

using Graph = vector<vector<int>>;
Graph G;
// global variables
ll H;

ll solve(ll X) {
    if (X == 1) return 1;
    return 2 * solve(X / 2) + 1;
}

int main() {
    // input
    cin >> H;

    // solve
    ll cnt = solve(H);

    // output
    cout << cnt << endl;
}