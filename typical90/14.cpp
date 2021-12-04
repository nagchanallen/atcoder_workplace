#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int N;
vector<int> A, B;

int main() {
    cin >> N;
    A.resize(N); B.resize(N);
    for (int i = 0; i < N; ++i) cin >> A[i];
    for (int i = 0; i < N; ++i) cin >> B[i];
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    long long ans = 0;
    for (int i = 0; i < N; ++i) ans += abs(A[i] - B[i]);
    cout << ans << endl;
}