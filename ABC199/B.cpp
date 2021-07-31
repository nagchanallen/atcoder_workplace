#include <bits/stdc++.h>
using namespace std;
int N, ans = 0, A[101], B[101], res[1001];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> B[i];
    }
    for (int i = 1; i <= 1000; i++) {
        res[i] = 0;
    }

    for (int i = 1; i <= 1000; i++) {
        for (int j = 0; j < N; j++) {
            if (i >= A[j] && i <= B[j]) {
                res[i] = res[i] + 1;
            }
        }
    }

    for (int i = 1; i <= 1000; i++) {
        if (res[i] == N) {
            ans++;
        }
    }

    cout << ans << endl;
}