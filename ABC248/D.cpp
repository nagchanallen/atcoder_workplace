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
int N, A[200005], Q;
unordered_map<int, vector<int>> mp;

int main() {
    cin >> N;
    rep1(i, N) {
        cin >> A[i];
        mp[A[i]].push_back(i);
    } 
    cin >> Q;
    rep0(q, Q) {
        int L, R, X;
        cin >> L >> R >> X;
        int lo = upper_bound(mp[X].begin(), mp[X].end(), L - 1) - mp[X].begin();
        int up = upper_bound(mp[X].begin(), mp[X].end(), R) - mp[X].begin();
        cout << up - lo << endl;
    }
}