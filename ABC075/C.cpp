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

vector<int> f;

int find(int x) {
    if (f[x] == -1 || f[x] == x) {
        return x;
    }
    f[x] = find(f[x]);
    return f[x];
}

void merge(int x, int y) {
    f[find(x)] = find(y);
}

bool same(int x, int y) {
    return (find(x) == find(y));
}

// global variables
int N, M, a[100], b[100], ans = 0;

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        cin >> a[i] >> b[i];
        a[i]--; b[i]--;
    }
    for (int i = 0; i < M; ++i) {
        f.assign(N, -1);
        for (int j = 0; j < M; ++j) {
            if (i == j) continue;
            merge(a[j], b[j]);
        }
        unordered_set<int> s;
        for (int j = 0; j < N; ++j) {
            s.insert(find(j));
        }
        if (s.size() != 1) {
            ans++;
        }
    }
    cout << ans << endl;
}