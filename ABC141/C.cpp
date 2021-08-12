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
// global variable
int N, K, Q;

int main() {
    // input
    cin >> N >> K >> Q;
    // solve
    int s[N + 1];
    rep1(i, N) s[i] = K - Q;
    rep0(i, Q) {
        int A;
        cin >> A;
        s[A]++;
    }
    int cnt = 0;
    // output
    rep1(i, N) {
        if (s[i] > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

}