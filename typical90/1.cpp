#include <iostream>
using namespace std;

int N, L, K, A[100005];

int main() {
    cin >> N >> L;
    cin >> K;
    A[0] = 0;
    for (int i = 1; i <= N; ++i) cin >> A[i];
    int lo = 0, hi = 2e9;
    while (lo + 1 < hi) {
        int mid = (lo + hi) / 2;
        int length = mid - 1, last_cut = 0, cnt = 0;
        for (int i = 1; i <= N; ++i) {
            if (length <= A[i] - last_cut && length <= L - A[i]) {
                cnt++;
                last_cut = A[i];
            }
        }
        if (cnt >= K) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    cout << lo - 1 << endl;
}