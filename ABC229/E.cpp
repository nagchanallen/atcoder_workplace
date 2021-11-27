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
int N, M, A[200005], B[200005];
vector<vector<int>> G;



int main() {
    // input
    cin >> N >> M;
    dsu d(N);
    G.resize(N);
    rep1(i, M) {
        cin >> A[i] >> B[i];
        A[i]--; B[i]--;
        G[min(A[i], B[i])].push_back(max(A[i], B[i]));
    }
    // solve
    vector<int> ans;
    ans.push_back(0);
    int temp = 0;
    for (int i = N - 1; i >= 0; --i) {
        temp++;
        for (auto e: G[i]) {
            if (!d.same(i, e)) {
                temp--;
                d.merge(i, e);
            }
        }
        ans.push_back(temp);
    }
    reverse(ans.begin(), ans.end());
    rep1(i, N) cout << ans[i] << endl;
}