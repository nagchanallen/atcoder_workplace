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
ll X, Y, A[200005], ans = 0;

ll helper(int left, int right) {
    ll L = left, R = left, sum = 0, x_count = 0, y_count = 0;
    if (A[R] == X) {
        x_count++;
    }
    if (A[R] == Y) {
        y_count++;
    }
    while (L <= right && R <= right) {
        if (x_count > 0 && y_count > 0) {
            sum += (right - R + 1);
            if (A[L] == X) {
                x_count--;
            }
            if (A[L] == Y) {
                y_count--;
            }
            L++;
        } else {
            R++;
            if (A[R] == X) {
                x_count++;
            }
            if (A[R] == Y) {
                y_count++;
            }
        }
    }
    return sum;
}

int main() {
    cin >> N >> X >> Y;
    rep1(i, N) cin >> A[i];

    deque<int> dq;
    for (int i = 1; i <= N; ++i) {
        if (A[i] >= Y && A[i] <= X) {
            if (dq.size() == 2) {
                dq.pop_back();
                dq.push_back(i);
            } else {
                dq.push_front(i);
                dq.push_back(i);
            }
        } else {
            if (dq.size() == 2) {
                ans += helper(dq.front(), dq.back());
                dq.pop_front();
                dq.pop_back();
            }
        }
    }

    if (dq.size() == 2) {
        ans += helper(dq.front(), dq.back());
        dq.pop_front();
        dq.pop_back();
    }

    cout << ans << endl;
}