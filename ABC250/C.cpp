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
int N, Q;
unordered_map<int, int> b, c;

int main() {
    cin >> N >> Q;
    for (int i = 0; i < N; ++i) {
        b[i + 1] = i;
        c[i] = i + 1;
    }
    rep0(q, Q) {
        int x; cin >> x;
        int ind = b[x];
        if (ind == N - 1) {
            int next = c[ind - 1];
            c[ind - 1] = x;
            c[ind] = next;
            b[x] = ind - 1;
            b[next] = ind;
        } else {
            int next = c[ind + 1];
            c[ind + 1] = x;
            c[ind] = next;
            b[x] = ind + 1;
            b[next] = ind;
        }
    }

    for (int i = 0; i < N; ++i) {
        cout << c[i] << " ";
    }
    cout << endl;
}