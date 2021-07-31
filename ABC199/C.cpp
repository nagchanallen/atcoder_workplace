#include <bits/stdc++.h>
using namespace std;
int N, Q, T[1000000], A[1000000], B[1000000], C[1000000];
string S;

int main() {
    cin >> N;
    cin >> S;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> T[i] >> A[i] >> B[i];
    }

    string S0 = S.substr(0, N);
    string S1 = S.substr(N, N);

    for (int i = 0; i < Q; i++) {
        char temp;
        if (T[i] == 1) {
            if (A[i] - 1 < N && B[i] - 1 < N) {
                swap(S0[A[i] - 1], S0[B[i] - 1]);
            } else if (A[i] - 1 < N && B[i] - 1 >= N) {
                swap(S0[A[i] - 1], S1[B[i] - 1 - N]);
            } else if (A[i] - 1 >= N && B[i] - 1 < N) {
                swap(S1[A[i] - 1 - N], S0[B[i] - 1]);
            } else {
                swap(S1[A[i] - 1 - N],S1[B[i] - 1 - N]);
            }
        } else {
            swap(S0, S1);
        }

    }
        cout << S0 + S1 << endl;
}