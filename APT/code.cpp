#include <bits/stdc++.h>
using namespace std;
int A, B, M, a[100001], b[100001], c[100001], x[100001], y[100001], minA = 1e9, minB = 1e9;

int main() {
    cin >> A >> B >> M;
    for (int i = 1; i <= A; i++) {
        cin >> a[i];
        minA = min(a[i], minA);
    }
    for (int i = 1; i <= B; i++) {
        cin >> b[i];
        minB = min(b[i], minB);
    }
    for (int i = 1; i <= M; i++) {
        cin >> x[i] >> y[i] >> c[i];
    }

    int mini = 1e9;
    for (int i = 1; i <= M; i++) {
        mini = min(a[x[i]] + b[y[i]] - c[i], mini);
    }

    mini = min(mini, minA + minB);

    cout << mini << endl;
}