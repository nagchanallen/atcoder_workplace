#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int m, n, maxi = 0;
int G[100][100];
bool seen[100][100];

void dfs(int i, int j, int h) {
    if (seen[i][j] || G[i][j] == 0) return;
    seen[i][j] = true;
    h++;
    maxi = max(h, maxi);
    if (i - 1 >= 1 && !seen[i - 1][j]) dfs(i - 1, j, h);
    if (i + 1 <= n && !seen[i + 1][j]) dfs(i + 1, j, h);
    if (j - 1 >= 1 && !seen[i][j - 1]) dfs(i, j - 1, h);
    if (j + 1 <= n && !seen[i][j + 1]) dfs(i, j + 1, h);
    seen[i][j] = false;
}

int main() {
    // input
    cin >> m >> n;
    rep1(i, n) rep1(j, m) cin >> G[i][j];
    // solve
    rep1(i, n) rep1(j, m) {
        dfs(i, j, 0);
    }
    // output
    cout << maxi << endl;
}