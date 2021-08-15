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
int S, T;

int main() {
    // input
    cin >> S >> T;
    // solve
    ll cnt = 0;
    rep0(i, 101) rep0(j, 101) rep0(k, 101) {
        if ((i + j + k) <= S && (i * j * k) <= T) cnt++;
    } 
    // output
    cout << cnt << endl;
}