#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define rep0(i, n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i, n) for (int i = 1; i <= (int)(n); ++i)
ll MOD = 1e9+7;
ll LLINF = 3e18;
int INTINF = 2e9;

// global variables
int N;
long double A[100005], B[100005], D = 0;

int main() {
    // input
    cin >> N;
    rep0(i, N) {
        cin >> A[i] >> B[i];
        D += A[i];
    }
    // solve
    long double lo = 0, hi = D;
    while (true) {
        long double mid = (lo + hi) / 2;
        long double temp1 = 0, temp2 = D, time1 = 0, time2 = 0;
        long double next = A[0];
        int i = 0;
        while (temp1 + next < mid) {
            time1 += (A[i] / B[i]);
            temp1 += next;
            i++;
            next = A[i];
        }
        time1 += (mid - temp1) / B[i];
        i = N - 1;
        next = A[N - 1];
        while (temp2 - next > mid) {
            time2 += (A[i] / B[i]);
            temp2 -= next;
            i--;
            next = A[i];
        }
        time2 += (temp2 - mid) / B[i];
        if (abs(time2 - time1) < 0.0000001) {
            cout << fixed;
            cout << setprecision(9) << mid << endl;
            return 0;
        } else if (time2 > time1) {
            lo = mid;
        } else {
            hi = mid;
        }
    }
}