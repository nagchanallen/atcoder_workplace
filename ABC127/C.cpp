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
int N, M;

int main() {
    // input
    cin >> N >> M;    
    // solve
    int left = 1;
    int right = N;
    rep0(i, M) {
        int L, R;
        cin >> L >> R;
        left = max(left, L);
        right = min(right, R);
    }
    // output
    cout << max(0, right - left + 1) << endl;
}