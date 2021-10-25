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
vector<vector<int>> G(10);
vector<int> P(10);
set<string> S;
int M;
ll cnt = 0;

int main() {
    // input
    cin >> M;
    rep0(i, M) {
        int u, v; cin >> u >> v; u--; v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }
    rep0(i, 8) {
        int p; cin >> p;
        P[p - 1] = i + 1;
    }
    int s;
    string temp = "";
    rep0(i, 9) {
        temp = temp + to_string(P[i]);
        if (P[i] == 0) s = i;
    }
    queue<pair<pair<string, int>, int>> q;
    q.push({{temp, s}, 0});
    S.insert(temp);
    while (!q.empty()) {
        auto p = q.front();
        auto state = p.first.first;
        auto node = p.first.second;
        q.pop();
        if (state == "123456780") {
            cout << p.second << endl;
            return 0;
        }
        string temp;
        for (auto v: G[node]) {
            temp = state;
            swap(temp[v], temp[node]);
            if (S.count(temp) == 0) {
                q.push({{temp, v}, p.second + 1});
                S.insert(temp);
            }
        }
    }
    cout << -1 << endl;
}