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
int N, K, P[500005];
set<int> s;

int main() {
    cin >> N >> K;
    for (int i = 1; i <= N; ++i) {
        cin >> P[i];
    }
    for (int i = 1; i <= K; ++i) {
        s.insert(P[i]);
    }
    auto pt = s.begin();
    int mini = *pt;
    cout << mini << endl;
    for (int i = K + 1; i <= N; ++i) {
        if (P[i] != mini) s.insert(P[i]);
        if (P[i] >= mini) {
            pt++;
            mini = *pt;
        }
        cout << *pt << endl;
    }
}