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
int N, M;
vector<int> p;

int main() {
    cin >> N >> M;
    for (int i = 1; i * i <= M; ++i) {
        if (M % i == 0) {
            p.push_back(i);
            p.push_back(M / i);
        }
    }
    sort(p.begin(), p.end());
    for (int i = p.size() - 1; i >= 0; --i) {
        int x = M / p[i];
        if (x >= N) {
            cout << p[i] << endl;
            return 0;
        }
    }
}