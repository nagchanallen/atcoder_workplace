#include <bits/stdc++.h>
using namespace std;
long long N, A[300005];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N);
    long long cnt = 0;
    int p1 = 0;
    int m = 0;
    for (int p2 = 1; p2 < N; p2++) {
        m++;
        if (A[p1] != A[p2]) {
            cnt = cnt + (N - p2) * m;
            m = 0;
            p1 = p2;
        }
    }
    cout << cnt << endl;
}