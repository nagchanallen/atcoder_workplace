#include <bits/stdc++.h>
using namespace std;
int N, A[1001];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    sort(A, A + N);
    for (int i = 0; i < N; i++) {
        if (A[i] != i + 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}