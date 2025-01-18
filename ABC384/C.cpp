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
int a, b, c, d, e, cnt[20];
vector<pair<int,string>> v;
string S = "ABCDE";

int main() {
    rep0(i, 5) {
        cin >> cnt[i];
    }
    
    for (int i = 0; i < (1 << 5); ++i) {
        if (i == 0) continue;
        string key = "";
        int sum = 0;
        for (int j = 0; j < 5; ++j) {
            if (i & (1 << j)) {
                key += S[j];
                sum += cnt[j];
            }
        }
        v.push_back({sum, key});
    }

    sort(v.begin(), v.end(), [](const auto&l, const auto &r) {
        return (l.first == r.first) ? l.second < r.second : l.first > r.first;
    });

    for (auto p: v) {
        cout << p.second << endl;
    }
}