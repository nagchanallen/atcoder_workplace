#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
#define repi(i, a, b) for(int i = int(a); i < int(b); ++i)
ll A[10], ans = 0;

int main() {
    repi(i, 1, 4) cin >> A[i];
    if (A[2] - A[1] < A[3] - A[2]) {
        ll temp;
        if ((A[1] + A[3]) % 2 == 0) {
            temp = (A[1] + A[3]) / 2;
        } else {
            temp = (A[1] + A[3]) / 2 + 1;
        }
        ans += (temp - A[2]);
        A[2] = temp;
        ans += ((A[2] - A[1]) - (A[3] - A[2]));
    } else {
        ans += ((A[2] - A[1]) - (A[3] - A[2]));
    }
    cout << ans << endl;
}