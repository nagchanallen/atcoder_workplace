#include <iostream>
#include <algorithm>
using namespace std;
int N, M;
long long A[105][105], maxi = 0;

int main() {
    cin >> N >> M;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {
            cin >> A[i][j];
        }
    }
    for (int m1 = 1; m1 <= M; m1++) {
        for (int m2 = m1 + 1; m2 <= M; m2++) {
            long long ans = 0;
            for (int i = 1; i <= N; i++) {
                ans += max(A[i][m1], A[i][m2]);
            }
            maxi = max(ans, maxi);
        }
    }
    cout << maxi << endl;
}