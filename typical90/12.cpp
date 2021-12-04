#include <iostream>
#include <vector>
using namespace std;

int H, W, Q;
bool painted[2005][2005];

vector<int> dsu;

int find(int x) {
    if (dsu[x] == -1) return x;
    dsu[x] = find(dsu[x]);
    return dsu[x];
}

void merge(int u, int v) {
    u = find(u);
    v = find(v);
    if (u != v) dsu[u] = v;
}

bool same(int u, int v) {
    return (find(u) == find(v));
}

int main() {
    cin >> H >> W;
    cin >> Q;
    dsu.resize(H * W, -1);
    for (int i = 0; i < Q; ++i) {
        int q; cin >> q;
        if (q == 1) {
            int r, c; cin >> r >> c;
            painted[r][c] = true;
            int dr[4] = {1, -1, 0, 0};
            int dc[4] = {0, 0, 1, -1};
            for (int i = 0; i < 4; ++i) {
                int nr = r + dr[i]; 
                int nc = c + dc[i];
                if (painted[nr][nc]) {
                    merge((r - 1) * W + c - 1,(nr - 1) * W + nc - 1);
                }
            }
        } else if (q == 2) {
            int ra, ca, rb, cb; cin >> ra >> ca >> rb >> cb;
            if (painted[ra][ca] && painted[rb][cb] 
                && same((ra - 1) * W + ca - 1, (rb - 1) * W + cb - 1)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
}