#include <bits/stdc++.h>
#include <atcoder/dsu>
using namespace std;
using namespace atcoder;
int N, A[200005];
long long ans = 0;

int main() {
    cin >> N;
    dsu d(300050);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < N / 2; ++i) {
        d.merge(A[i], A[N - 1 - i]);
    }
    for (auto e: d.groups()) {
        ans += (e.size() - 1);
    }
    cout << ans << endl;
}