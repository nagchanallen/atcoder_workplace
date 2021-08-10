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
int N, P[15], Q[15], a, b;

int main() {
    // input
    cin >> N;
    rep0(i, N) cin >> P[i];
    rep0(i, N) cin >> Q[i];

    // solve
    vector<int> per(N);
    rep0(i, N) per[i] = i + 1;
    int cnt = 1;
    do {
        bool okP = true;
        bool okQ = true;
        rep0(i, N) {
            if (per[i] != P[i]) okP = false;
            if (per[i] != Q[i]) okQ = false;
        }
        if (okP) a = cnt;
        if (okQ) b = cnt;
        cnt++;
    } while (next_permutation(per.begin(), per.end()));
    
    // output
    cout << abs(a - b) << endl;
}