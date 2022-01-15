#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int M, N, K, a[100005], b[100005], c[100005], d[100005];
int J[1005][1005], O[1005][1005], I[1005][1005];
char G[1005][1005];

int main() {
    cin >> M >> N;
    cin >> K;
    for (int i = 1; i <= M; ++i) {
        for (int j = 1; j <= N; ++j) {
            cin >> G[i][j];
            J[i][j] = 0;
            O[i][j] = 0;
            I[i][j] = 0;
        }
    }
    for (int i = 1; i <= K; ++i) {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    for (int i = 0; i <= M; ++i) {
        for (int j = 0; j <= N; ++j) {
            J[i][j] = 0;
            O[i][j] = 0;
            I[i][j] = 0;
        }
    }
    for (int i = 1; i <= M; ++i) {
        int A = 0, B = 0, C = 0;
        for (int j = 1; j <= N; ++j) {
            if (G[i][j] == 'J') {
                A += 1;
            } else if (G[i][j] == 'O') {
                B += 1;
            } else if (G[i][j] == 'I') {
                C += 1;
            }
            J[i][j] = J[i - 1][j] + A; 
            O[i][j] = O[i - 1][j] + B; 
            I[i][j] = I[i - 1][j] + C; 
        }
    }

    for (int i = 1; i <= K; ++i) {
        int ansJ = J[c[i]][d[i]] - J[c[i]][b[i] - 1] - J[a[i] - 1][d[i]] + J[a[i] - 1][b[i] - 1];
        int ansO = O[c[i]][d[i]] - O[c[i]][b[i] - 1] - O[a[i] - 1][d[i]] + O[a[i] - 1][b[i] - 1];
        int ansI = I[c[i]][d[i]] - I[c[i]][b[i] - 1] - I[a[i] - 1][d[i]] + I[a[i] - 1][b[i] - 1];
        cout << ansJ << ' ' << ansO << ' ' << ansI << endl;
    }
}