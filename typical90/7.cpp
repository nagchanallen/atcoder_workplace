#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N, Q;

int main() {
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    sort(A.begin(), A.end());
    cin >> Q;
    for (int q = 0; q < Q; ++q) {
        int B; cin >> B;
        auto hip = lower_bound(A.begin(), A.end(), B);
        int lo, hi;
        if (hip == A.end()) {
            hi = A[N - 1];
        } else {
            hi = *hip;
        }
        if (hip == A.begin()) {
            lo = hi;
        } else {
            lo = *--hip;
        }
        cout << min(abs(lo - B), abs(hi - B)) << endl;
    }
}