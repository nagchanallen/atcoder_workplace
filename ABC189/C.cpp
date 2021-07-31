#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
using Graph = vector<vector<int>>;
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

ll N, A[10005];
ll maxi = 0;

int main() {
    cin >> N;
    rep0(i, N) cin >> A[i];
    for (int i = 0; i < N; ++i) {
        ll mini = LLINF;
        for (int j = i; j < N; ++j) {
            mini = min(mini, A[j]);
            maxi = max(maxi, mini * (j - i + 1));
        }
    }
    cout << maxi << endl;
}