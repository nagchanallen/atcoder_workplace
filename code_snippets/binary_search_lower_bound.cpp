#include <bits/stdc++.h>
using namespace std;
int N, A[100005], K;

int main() {
    cin >> N >> K;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int lo = 0;
    int hi = N;
    while (lo + 1 < hi) {
        int mid = (lo + hi) / 2;
        if (A[mid - 1] < K) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
    if (A[lo] < K) {
        cout << "No" << endl;
    } else {
        cout << "found " << A[lo] << endl;
    }
}