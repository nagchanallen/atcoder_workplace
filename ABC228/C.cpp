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
int N, K, P[100005][4], mark[100005], mark2[100005];
int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cin >> P[i][j];
            mark[i] += P[i][j];
            mark2[i - 1] += P[i][j];
        }
    }
    sort(mark2, mark2 + N);
    for (int i = 1; i <= N; ++i) {
        int ind = upper_bound(mark2, mark2 + N, mark[i] + 300) - mark2;
        int rank = N - ind + 1;
        if (K >= rank) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}