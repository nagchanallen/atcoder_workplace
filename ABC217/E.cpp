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
int Q;

int main() {
    // input
    cin >> Q;
    // solve
    deque<int> dq;
    priority_queue<int, vector<int>, greater<int>> pq;
    rep0(i, Q) {
        int q; cin >> q;
        if (q == 1) {
            // q == 1
            int x; cin >> x;
            dq.push_back(x);
        } else if (q == 2) {
            if (pq.empty()) {
                int qt;
                qt = dq.front();
                cout << qt << endl;
                dq.pop_front();
            } else {
                int pt;
                pt = pq.top();
                cout << pt << endl;
                pq.pop();
            }
        } else {
            for (auto s: dq) pq.push(s);
            dq = deque<int>();
        }
    }
}