#include <iostream>
using namespace std;

int N, Q, A[100005], B[100005];

int main() {
    cin >> N;
    A[1] = 0; B[1] = 0;
    for (int i = 1; i <= N; ++i) {
        int C, P; cin >> C >> P;
        if (C == 1) {
            A[i + 1] = A[i] + P;
            B[i + 1] = B[i];
        } else {
            A[i + 1] = A[i];
            B[i + 1] = B[i] + P;
        }
    }
    cin >> Q;
    for (int i = 0; i < Q; ++i) {
        int L, R; cin >> L >> R;
        cout << A[R + 1] - A[L] << ' ' << B[R + 1] - B[L] << endl;
    }
}