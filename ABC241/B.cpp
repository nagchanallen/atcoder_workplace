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
int N, M, A[1005], B[1005];
unordered_map<int, int> temp;

int main() {
    cin >> N >> M;
    rep0(i, N) {
        cin >> A[i];
        temp[A[i]]++;
    }
    rep0(i, M) cin >> B[i];
    string ans = "Yes";
    rep0(i, M) {
        if (temp.count(B[i]) > 0 && temp[B[i]] > 0) {
            temp[B[i]]--;
        } else {
            ans = "No";
            break;
        }
    }
    cout << ans << endl;
}