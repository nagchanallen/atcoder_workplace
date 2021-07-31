#include <bits/stdc++.h>
using namespace std;
int N, X, A[105], sum = 0;

int main() {
    cin >> N >> X;
    for (int i = 1; i <= N; i++) {
        cin >> A[i];
    }
    for (int i = 2; i <= N; i += 2) {
        A[i] -= 1;
    }
    for (int i = 1; i <= N; i++) {
        sum += A[i];
    }
    if (X >= sum) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}