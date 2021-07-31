#include <bits/stdc++.h>
using namespace std;
long long N, Q;
vector<long long> A;

long long find(long long M) {
    if (M >= A[N - 1]) {
        return M - N;
    } else {
        return M - (upper_bound(A.begin(), A.end(), M) - A.begin());
    }
}

int main() {
    cin >> N >> Q;
    A.assign(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < Q; i++) {
        long long K;
        cin >> K;
        long long lo = 1;
        long long hi = 2e18 + 1;
        while (lo + 1 < hi) {
            long long mid = (lo + hi) / 2;
            if (find(mid - 1) < K) {
                lo = mid;
            } else {
                hi = mid;
            }
        }
        cout << lo << endl;
    }
}