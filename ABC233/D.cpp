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
ll N, K, A[200005], S[200005];

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; ++i) {
        cin >> A[i];
    }

    // reference: https://leetcode.com/problems/subarray-sum-equals-k/solution/
    unordered_map<ll, ll> m;
    m[0] = 1;
    ll count = 0, sum = 0;
    for (int i = 1; i <= N; i++) {
        sum += A[i];
        if (m.count(sum - K) > 0) count += m[sum - K];
        m[sum] += 1;
    }
    cout << count << endl;
}