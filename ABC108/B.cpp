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
int x[10], y[10];

int main() {
    // input
    cin >> x[1] >> y[1] >> x[2] >> y[2];
    // solve
    int dx = x[2] - x[1];
    int dy = y[2] - y[1];
    int vx = -1 * dy;
    int vy = dx;
    x[3] = x[2] + vx;
    y[3] = y[2] + vy;
    vx = -1 * dx;
    vy = -1 * dy;
    x[4] = x[3] + vx;
    y[4] = y[3] + vy;
    // output
    cout << x[3] << ' ' << y[3] << ' ' << x[4] << ' ' << y[4] << endl;
}