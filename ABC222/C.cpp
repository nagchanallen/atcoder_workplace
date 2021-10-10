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
int N, M, G[105][105];

bool s(const pair<int, int>& a, const pair<int, int>& b) {
    if (a.first != b.first) {
        return (a.first > b.first);
    } else {
        return (a.second < b.second);
    }
}

int main() {
    // input
    cin >> N >> M;
    for (int i = 1; i <= 2 * N; ++i) {
        string A;
        cin >> A;
        for (int j = 0; j < M; ++j) {
            if (A[j] == 'G') G[i][j + 1] = 3;
            if (A[j] == 'C') G[i][j + 1] = 2;
            if (A[j] == 'P') G[i][j + 1] = 1;
        }
    }
    // solve
    vector<pair<int, int>> mark(2 * N + 1), rank(2 * N + 1);
    for (int i = 1; i <= 2 * N; ++i) {
        rank[i] = make_pair(0, i);
        mark[i] = make_pair(0, i);
    }
    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            int p1 = rank[2 * j - 1].second;
            int p2 = rank[2 * j].second;
            if (G[p1][i] == G[p2][i]) continue;
            if (G[p1][i] == 1 && G[p2][i] == 3) {
                mark[p1].first++;
            } else if (G[p1][i] == 3 && G[p2][i] == 1) {
                mark[p2].first++;
            } else if (G[p1][i] > G[p2][i]) {
                mark[p1].first++;
            } else {
                mark[p2].first++;
            }
        }
        rank = mark;
        sort(rank.begin() + 1, rank.end(), s);
    }
    for (int i = 1; i <= 2 * N; ++i) {
        cout << rank[i].second << endl;
    }
}