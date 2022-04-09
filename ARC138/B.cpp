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
int N, A[200005];
set<pair<int, int>> st;

bool helper(int head, int tail) {
    if (head == tail) {
        return ((A[head] + head - 1) % 2 == 0);
    }

    bool good = false;

    if ((A[tail] + head - 1) % 2 == 0) {
        // B
        good = good || helper(head, tail - 1);
    } else if ((A[head] + head - 1) % 2 == 0) {
        // A
        good = good || helper(head + 1, tail);
    }

    return good;
}

int main() {
    cin >> N;
    rep1(i, N) cin >> A[i];

    bool res = helper(1, N);
    if (res) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}