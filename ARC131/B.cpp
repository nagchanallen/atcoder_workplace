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
int H, W;
string c[800];
char d[800][800];

int main() {
    cin >> H >> W;
    for (int i = 0; i < H; ++i) {
        cin >> c[i];
    }
    vector<char> temp = {'1', '2', '3', '4', '5'};
    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (c[i][j] != '.') {
                cout << c[i][j];
                continue;
            }
            vector<int> dh = {1, -1, 0, 0};
            vector<int> dw = {0, 0, -1, 1};
            set<char> temp2;
            for (int k = 0; k < 4; ++k) {
                int nh = i + dh[k], nw = j + dw[k];
                if (nh < 0 || nh >= H || nw < 0 || nw >= W) continue;
                temp2.insert(c[nh][nw]);
                temp2.insert(d[nh][nw]);
            }
            for (char q: temp) {
                if (temp2.find(q) == temp2.end()) {
                    d[i][j] = q;
                    cout << q;
                    break;
                }
            }
        }
        cout << endl;
    }
}