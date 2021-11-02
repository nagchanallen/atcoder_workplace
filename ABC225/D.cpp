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
int N, Q;

int main() {
    // input
    cin >> N >> Q;
    int parent[N + 1];
    int son[N + 1];
    rep1(i, N) {
        parent[i] = i;
        son[i] = i;
    }
    // solve
    rep0(t, Q) {
        int q; cin >> q;
        if (q == 1) {
            int x, y;
            cin >> x >> y;
            parent[y] = x;
            son[x] = y;
        } else if (q == 2) {
            int x, y;
            cin >> x >> y;
            parent[y] = y;
            son[x] = x;
        } else {
            int x, front, temp;
            cin >> x; front = x;
            while (parent[front] != front) {
                front = parent[front];
            }
            temp = front;
            vector<int> v;
            while (true) {
                v.push_back(temp);
                if (son[temp] == temp) break;
                temp = son[temp];
            }
            cout << v.size() << ' ';
            for (int i = 0; i < v.size(); i++) {
                cout << v[i] << ' ';
            }
            cout << endl;
        }
    }
}