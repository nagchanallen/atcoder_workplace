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
int N;
string T;

vector<pair<int, int>> rd = {{1, 0}, {0, -1}, {-1, 0}, {0, 1}};

int main() {
    cin >> N;
    cin >> T;
    int cnt = 0;
    pair<int, int> cur = {0, 0};
    for (char c: T) {
        if (c == 'S') {
            cur.first += rd[cnt].first;
            cur.second += rd[cnt].second;
        } else {
            cnt = (cnt + 1) % 4;
        }
    }
    cout << cur.first << " " << cur.second << endl;
}