#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for(int i = 1; i <= int(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int N, M, A[100005];

int main() {
    // input
    cin >> N >> M;
    rep0(i, N) cin >> A[i];
    unordered_set<int> p;
    // solve
    rep0(i, N) {
        int n = A[i];
        while (n % 2 == 0) {
            p.insert(2);
            n = n/2;
        }
        for (int i = 3; i <= sqrt(n); i = i + 2) {
            while (n % i == 0) {
                p.insert(i);
                n = n / i;
            }
        }
        if (n > 2) p.insert(n);
    }
    set<int> temp;
    for (auto e: p) {
        for (int i = e; i <= M; i += e) {
            temp.insert(i);
        }
    }
    set<int> temp2;
    for (int i = 1; i <= M; i++) {
        if (temp.find(i) == temp.end()) temp2.insert(i);
    }
    // output
    cout << temp2.size() << endl;
    for (auto e: temp2) cout << e << endl;
}