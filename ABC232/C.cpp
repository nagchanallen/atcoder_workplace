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

vector<set<int>> G1, G2;
bool F1[100][100], F2[100][100];

// global variables
int N, M;

int main() {
    cin >> N >> M;
    for (int i = 0; i < M; ++i) {
        int A, B; cin >> A >> B;
        F1[A][B] = true;
        F1[B][A] = true;
    }
    for (int i = 0; i < M; ++i) {
        int C, D; cin >> C >> D;
        F2[C][D] = true;
        F2[D][C] = true;
    }
    vector<int> temp;
    rep1(i, N) temp.push_back(i);

    sort(temp.begin(), temp.end());
    do {
        bool ok = true;
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (i == j) continue;
                if (F1[i][j] != F2[temp[i - 1]][temp[j - 1]]) {
                    ok = false;
                }
            }
        }
        if (ok) {
            cout << "Yes" << endl;
            return 0;
        }
    } while (next_permutation(temp.begin(),temp.end()));
    cout << "No" << endl;
}