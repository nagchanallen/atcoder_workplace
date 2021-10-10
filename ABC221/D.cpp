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
int N;

int main() {
    // input
    cin >> N;
    map<int, int> record, p;
    // solve
    for (int i = 0; i < N; ++i) {
        int A, B;
        cin >> A >> B;
        record[A]++;
        record[A + B]--;
    }
    ll temp = 0, temp2 = 0;
    for (auto r: record) {
        if (r.second == 0) continue;
        p[temp] += (r.first - temp2);
        temp += r.second;
        temp2 = r.first;
    }
    for (int i = 1; i <= N; ++i) {
        if (p.find(i) == p.end()) {
            cout << 0 << ' ';
        } else {
            cout << p[i] << ' ';
        }
    }
}